#include "PictureFrameInfo.h"

PictureFrameInfo::PictureFrameInfo()
{
	PictureFrameInfo::MapCode = "";
	PictureFrameInfo::MapScale = -1;
	dL100 = 6.0;
	dB100 = 4.0;
	dL50 = 3.0;
	dB50 = 2.0;
	dL25 = 1.5;
	dB25 = 1.0;
	dL10 = 0.5;
	dB10 = 1. / 3.0;
	dL5 = 0.25;
	dB5 = 1. / 6.0;
	dL2d5 = 0.125;
	dB2d5 = 1. / 12.0;
	dL1 = 1. / 16.0;
	dB1 = 1. / 24.0;
}

PictureFrameInfo::PictureFrameInfo(QString MapCode, int MapScale)
{
	PictureFrameInfo::MapCode = MapCode;
	PictureFrameInfo::MapScale = MapScale;

	//各种比例尺图幅经差、纬差，单位为度
	dL100 = 6.0;
	dB100 = 4.0;
	dL50 = 3.0;
	dB50 = 2.0;
	dL25 = 1.5;
	dB25 = 1.0;
	dL10 = 0.5;
	dB10 = 1. / 3.0;
	dL5 = 0.25;
	dB5 = 1. / 6.0;
	dL2d5 = 0.125;
	dB2d5 = 1. / 12.0;
	dL1 = 1. / 16.0;
	dB1 = 1. / 24.0;
}

PictureFrameInfo::~PictureFrameInfo()
{
}


double PictureFrameInfo::DMS2DEG(double T0)
{
	double T;
	int D, M;
	double S;

	T = fabs(T0);
	T = (T*100000000. + 2.) / 100000000.;
	D = (int)T;
	M = (int)((T - D) * 100);
	S = ((T - D) * 100 - M) * 10000;
	double DEG=((D + M / 60. + S / 360000.)*fabs(T0) / T0);
	return DEG;
}

double PictureFrameInfo::DEG2DMS(double T0)
{
	//接近0的角度，直接返回0.000000
	if (T0 < 1e-8)
	{
		return 1e-10;
	}

	double T, dAngleDms;
	int D, M, flag;
	double S;

	T = fabs(T0);
	flag = int(T / T0);//取角度符号

	D = (int)T;
	M = (int)(60 * (T - D));
	S = 3600 * (T - D - M / 60.);

	if (S < 1e-10)
	{
		dAngleDms = ((D + M / 100.)*flag) + 0.0000000002;
	}
	else if (S > 59.9999999999)
	{
		S = 0.0;
		M++;

		if (M == 60)
		{
			M = 0;
			D++;
		}
		dAngleDms = ((D + M / 100. + S / 10000.)*flag);
	}
	else
	{
		dAngleDms = ((D + M / 100. + S / 10000.)*flag);
	}

	return dAngleDms;
}

void PictureFrameInfo::MapCode2LB(QString MapCode, int MapCodeScale)
{
	int   TH100, TL100;
	double L100, B100;

	int    T50;
	double L50, B50;

	int    T25;
	double L25, B25;

	int    T10;
	double L10, B10;

	int    T5;
	double L5, B5;

	int    T2d5;
	double L2d5, B2d5;

	int    T1;
	double L1, B1;

	QString CMapCode = "00000000";
	//图号不足八位的补0
	MapCode.toUpper(); 
	if (MapCode.length() < 8)
	{
		MapCode = MapCode + CMapCode.right(8 - MapCode.length());
	}

	//将 075013 类型的图号转为 G5013000
	char ch = MapCode[0].unicode();
	if ((ch >= 65 && ch <= 90) || (ch >= 97 && ch <= 122))
	{
		CMapCode = MapCode;
	}
	else
	{
		CMapCode.replace(0, 1, atoi(MapCode.left(2).toLocal8Bit()) + 'A' - 1);
		for (int i = 2; i < MapCode.length(); i++)
			CMapCode.replace(i - 1, 1, MapCode[i]);
	}


	//截取100万行号、列号，计算100万图幅左下角经纬度
	TH100 = CMapCode[0].toLatin1() - 'A' + 1;
	TL100 = atoi(CMapCode.mid(1, 2).toLocal8Bit());
	L100 = 6 * (TL100 - 31);
	B100 = 4 * (TH100 - 1);

	//截取50万行号、列号，计算50万图幅左下角经纬度
	T50 = atoi(CMapCode.mid(3, 1).toLocal8Bit());
	Number2dLdB(T50, 2, dL50, dB50);
	L50 = L100 + dL;
	B50 = B100 + dB;

	//截取25万行号、列号，计算50万图幅左下角经纬度
	T25 = atoi(CMapCode.mid(3, 2).toLocal8Bit());
	Number2dLdB(T25, 4, dL25, dB25);
	L25 = L100 + dL;
	B25 = B100 + dB;

	//截取10万行号、列号，计算50万图幅左下角经纬度
	T10 = atoi(CMapCode.mid(3, 3).toLocal8Bit());
	Number2dLdB(T10, 12, dL10, dB10);
	L10 = L100 + dL;
	B10 = B100 + dB;

	//截取5万行号、列号，计算50万图幅左下角经纬度
	T5 = atoi(CMapCode.mid(6, 1).toLocal8Bit());
	Number2dLdB(T5, 2, dL5, dB5);
	L5 = L10 + dL;
	B5 = B10 + dB;

	//截取2.5万行号、列号，计算50万图幅左下角经纬度
	T2d5 = atoi(CMapCode.mid(7, 1).toLocal8Bit());
	Number2dLdB(T2d5, 2, dL2d5, dB2d5);
	L2d5 = L5 + dL;
	B2d5 = B5 + dB;

	//截取1万行号、列号，计算50万图幅左下角经纬度
	T1 = atoi(CMapCode.mid(6, 2).toLocal8Bit());
	Number2dLdB(T1, 8, dL1, dB1);
	L1 = L10 + dL;
	B1 = B10 + dB;


	//根据指定比例尺设置类公共变量值(图幅左下角经纬度及相应图幅经差纬差)
	switch (MapCodeScale)
	{
	case 100:
		mL1 = L100; mB1 = B100;
		dL = dL100; dB = dB100;
		break;
	case 50:
		mL1 = L50; mB1 = B50;
		dL = dL50; dB = dB50;
		break;
	case 25:
		mL1 = L25; mB1 = B25;
		dL = dL25; dB = dB25;
		break;
	case 10:
		mL1 = L10; mB1 = B10;
		dL = dL10; dB = dB10;
		break;
	case 5:
		mL1 = L5; mB1 = B5;
		dL = dL5; dB = dB5;
		break;
	case 25000:
		mL1 = L2d5; mB1 = B2d5;
		dL = dL2d5; dB = dB2d5;
		break;
	case 1:
		mL1 = L1; mB1 = B1;
		dL = dL1; dB = dB1;
		break;
	}
	mL2 = mL1 + dL;
	mB2 = mB1;
	mL3 = mL1 + dL;
	mB3 = mB1 + dB;
	mL4 = mL1;
	mB4 = mB1 + dB;
}

void PictureFrameInfo::NeweMapCode2LB(QString NewMapCode, int MapCodeScale)
{
	int   TH100, TL100;
	int   TH, TL;
	double L100, B100;
	QChar ScaleCode;
	
	NewMapCode.toUpper();//将图号中的字母转为大写

	//截取100万行号、列号，计算100万图幅左下角经纬度
	TH100 = NewMapCode[0].unicode() - 'A' + 1;
	TL100 = atoi(NewMapCode.mid(1, 2).toLocal8Bit());
	L100 = 6 * (TL100 - 31);
	B100 = 4 * (TH100 - 1);

	//ScaleCode = NewMapCode.GetBuffer(10)[3];
	//NewMapCode.ReleaseBuffer();

	TH = atoi(NewMapCode.mid(4, 3).toLocal8Bit());
	TL = atoi(NewMapCode.mid(7, 3).toLocal8Bit());
	ScaleCode = NewMapCode.at(3);
	switch (ScaleCode.toLatin1())
	{
	case 'B'://50万
		dL = dL50;
		dB = dB50;
		mL1 = L100 + dL50*(TL - 1);
		mB1 = B100 + dB50*(2 - TH);
		break;
	case 'C'://25万
		dL = dL25;
		dB = dB25;
		mL1 = L100 + dL25*(TL - 1);
		mB1 = B100 + dB25*(4 - TH);
		break;
	case 'D'://10万
		dL = dL10;
		dB = dB10;
		mL1 = L100 + dL10*(TL - 1);
		mB1 = B100 + dB10*(12 - TH);
		break;
	case 'E'://5万
		dL = dL5;
		dB = dB5;
		mL1 = L100 + dL5*(TL - 1);
		mB1 = B100 + dB5*(24 - TH);
		break;
	case 'F'://2.5万
		dL = dL2d5;
		dB = dB2d5;
		mL1 = L100 + dL2d5*(TL - 1);
		mB1 = B100 + dB2d5*(48 - TH);
		break;
	case 'G'://1万
		dL = dL1;
		dB = dB1;
		mL1 = L100 + dL1*(TL - 1);
		mB1 = B100 + dB1*(96 - TH);
		break;
	}
	mL2 = mL1 + dL;
	mB2 = mB1;
	mL3 = mL1 + dL;
	mB3 = mB1 + dB;
	mL4 = mL1;
	mB4 = mB1 + dB;
}

QString PictureFrameInfo::LB2MapCode(double L, double B, int MapCodeScale, bool isNewMapCode, bool isFirstLetter)
{
	int N, Row, Col;
	QString MapCode100, MapCode50, MapCode25, MapCode10;
	QString MapCode5, MapCode2d5, MapCode1, cstrTemp;
	double dL, dB;

	//计算1:100万图幅图号
	N = int(B / 4) + 1;
	if (isFirstLetter)//1:100万I49类型
	{
		char a_char = 'A' + N - 1;
		MapCode100 = a_char;
	}
	else//1：100万0949类型
	{
		MapCode100 = QString::number(N);
		MapCode100 = QString("%1").arg(MapCode100.toInt(), 2, 10, QLatin1Char('0'));
	}
	N = int(L / 6) + 31;
	cstrTemp = QString::number(N);
	cstrTemp = QString("%1").arg(cstrTemp.toInt(), 2, 10, QLatin1Char('0'));
	MapCode100 = MapCode100 + cstrTemp;
	NewMapCode = MapCode100;

	//计算给定经纬度在1:100万图幅中的经差纬差
	dB = B - int(B / 4)*4.0;
	dL = L - int(L / 6)*6.0;

	//计算1:50万图幅图号
	Row = 2 - int(dB / 2.0);
	Col = int(dL / 3.0) + 1;
	N = (Row - 1) * 2 + Col;
	cstrTemp = QString::number(N);
	MapCode50 = MapCode100 + cstrTemp;

	//计算1:25万图幅图号
	Row = 4 - int(B - int(B / 4) * 4);
	Col = int((L - int(L / 6) * 6) / 1.5) + 1;
	N = (Row - 1) * 4 + Col;
	cstrTemp = QString::number(N);
	cstrTemp = QString("%1").arg(cstrTemp.toInt(), 2, 10, QLatin1Char('0'));
	MapCode25 = MapCode100 + cstrTemp;



	//计算1:10万图幅图号
	Row = 12 - int(dB * 3);
	Col = int(dL * 2) + 1;
	N = (Row - 1) * 12 + Col;
	cstrTemp = QString::number(N);
	cstrTemp = QString("%1").arg(cstrTemp.toInt(), 3, 10, QLatin1Char('0'));
	MapCode10 = MapCode100 + cstrTemp;

	//1:1万图幅图号,在10万基础上分的，不能移到2.5万之后
	{
		Row = 8 - int((dB - int(dB * 3) / 3.0) * 24);
		Col = int((dL - int(dL * 2) / 2.0) * 16) + 1;
		N = (Row - 1) * 8 + Col;
		cstrTemp = QString::number(N);
		cstrTemp = QString("%1").arg(cstrTemp.toInt(), 2, 10, QLatin1Char('0'));
		MapCode1 = MapCode10 + cstrTemp;
	}

	//计算给定经纬度在1:10万图幅中的经差纬差
	dB = dB - int(dB * 3) / 3.0;
	dL = dL - int(dL * 2) / 2.0;

	//1:5万图幅图号
	if (dB > 1.0 / 6. && dL < 1.0 / 4.)      MapCode5 = MapCode10 + "1";
	else if (dB > 1.0 / 6. && dL > 1.0 / 4.) MapCode5 = MapCode10 + "2";
	else if (dB < 1.0 / 6. && dL < 1.0 / 4.) MapCode5 = MapCode10 + "3";
	else if (dB<1.0 / 6. && dL>1.0 / 4.) MapCode5 = MapCode10 + "4";

	//1:2.5万图幅图号
	if (dB > 1.0 / 6.)dB = dB - 1.0 / 6.;
	if (dL > 1.0 / 4.)dL = dL - 1.0 / 4.;
	if (dB > 1.0 / 12 && dL < 1.0 / 8.)       MapCode2d5 = MapCode5 + "1";
	else if (dB > 1.0 / 12. && dL > 1.0 / 8.) MapCode2d5 = MapCode5 + "2";
	else if (dB < 1.0 / 12. && dL < 1.0 / 8.) MapCode2d5 = MapCode5 + "3";
	else if (dB<1.0 / 12. && dL>1.0 / 8.) MapCode2d5 = MapCode5 + "4";


	//重新计算给定经纬度在1:100万图幅中的经差纬差
	dB = B - int(B / 4)*4.0;
	dL = L - int(L / 6)*6.0;
	QString cRow = "";
	QString cCol = "";
	switch (MapCodeScale)
	{
	case 100:
		MapCode = MapCode100;
		NewMapCode = MapCode;
		break;
	case 50:
		MapCode = MapCode50;

		Row = 2 - int(dB / dB50);
		Col = int(dL / dL50) + 1;
		cRow = QString("%1").arg(QString::number(Row).toInt(), 3, 10, QLatin1Char('0'));
		cCol = QString("%1").arg(QString::number(Col).toInt(), 3, 10, QLatin1Char('0'));
		cstrTemp = cRow + cCol;
		NewMapCode = MapCode100 + "B" + cstrTemp;
		break;
	case 25:
		MapCode = MapCode25;

		Row = 4 - int(dB / dB25);
		Col = int(dL / dL25) + 1;
		cRow = QString("%1").arg(QString::number(Row).toInt(), 3, 10, QLatin1Char('0'));
		cCol = QString("%1").arg(QString::number(Col).toInt(), 3, 10, QLatin1Char('0'));
		cstrTemp = cRow + cCol;
		NewMapCode = MapCode100 + "C" + cstrTemp;
		break;
	case 10:
		MapCode = MapCode10;

		Row = 12 - int(dB / dB10);
		Col = int(dL / dL10) + 1;
		cRow = QString("%1").arg(QString::number(Row).toInt(), 3, 10, QLatin1Char('0'));
		cCol = QString("%1").arg(QString::number(Col).toInt(), 3, 10, QLatin1Char('0'));
		cstrTemp = cRow + cCol;		NewMapCode = MapCode100 + "D" + cstrTemp;
		break;
	case 5:
		MapCode = MapCode5;

		Row = int(dB / dB5);
		Row = 24 - int(dB / dB5);
		Col = int(dL / dL5) + 1;
		cRow = QString("%1").arg(QString::number(Row).toInt(), 3, 10, QLatin1Char('0'));
		cCol = QString("%1").arg(QString::number(Col).toInt(), 3, 10, QLatin1Char('0'));
		cstrTemp = cRow + cCol;		
		NewMapCode = MapCode100 + "E" + cstrTemp;
		break;
	case 25000:
		MapCode = MapCode2d5;

		Row = 48 - int(dB / dB2d5);
		Col = int(dL / dL2d5) + 1;
		cRow = QString("%1").arg(QString::number(Row).toInt(), 3, 10, QLatin1Char('0'));
		cCol = QString("%1").arg(QString::number(Col).toInt(), 3, 10, QLatin1Char('0'));
		cstrTemp = cRow + cCol;
		NewMapCode = MapCode100 + "F" + cstrTemp;
		break;
	case 1:
		MapCode = MapCode1;

		Row = 96 - int(dB / dB1);
		Col = int(dL / dL1) + 1;
		cRow = QString("%1").arg(QString::number(Row).toInt(), 3, 10, QLatin1Char('0'));
		cCol = QString("%1").arg(QString::number(Col).toInt(), 3, 10, QLatin1Char('0'));
		cstrTemp = cRow + cCol;
		NewMapCode = MapCode100 + "G" + cstrTemp;
		break;
	default:
		QMessageBox::warning(NULL, "warning", QString::fromLocal8Bit("比例尺选择错误！"));
		MapCode = "";
		NewMapCode = "";

	}
	if (isNewMapCode)
		return NewMapCode;
	else
		return MapCode;
}

void PictureFrameInfo::Number2dLdB(int xh, int dn, double dL, double dB)
{
	int Th, Tl;

	Th = dn - (xh - 1) / dn - 1;
	Tl = xh%dn;

	if (Tl == 0)
	{
		Tl = dn;
	}
	Tl = Tl - 1;

	PictureFrameInfo::dL = dL*Tl;
	PictureFrameInfo::dB = dB*Th;
}
