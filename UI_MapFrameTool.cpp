#include "UI_MapFrameTool.h"
#include "QString"
#include "QMessageBox"

UI_MapFrameTool::UI_MapFrameTool(QWidget* parent/* = 0*/, Qt::WindowFlags f/* = 0*/)
{
	ui.setupUi(this);
	m_iMapScale = 4;
	m_iTransStyle = 1;
	ui.lineEdit_NewPitcureID->setEnabled(false);
	connect(ui.pushButton_Cal, SIGNAL(clicked()), this, SLOT(slot_ButtonOK()));
	connect(ui.radioButton_Scale100, SIGNAL(clicked()), this, SLOT(slot_OnRadioMapScale100()));
	connect(ui.radioButton_Scale50, SIGNAL(clicked()), this, SLOT(slot_OnRadioMapScale50()));
	connect(ui.radioButton_Scale10, SIGNAL(clicked()), this, SLOT(slot_OnRadioMapScale10()));
	connect(ui.radioButton_Scale5, SIGNAL(clicked()), this, SLOT(slot_OnRadioMapScale5()));
	connect(ui.radioButton_Scale25000, SIGNAL(clicked()), this, SLOT(slot_OnRadioMapScale25000()));
	connect(ui.radioButton_Scale1, SIGNAL(clicked()), this, SLOT(slot_OnRadioMapScale1()));
	connect(ui.radioButton_FromLonLat, SIGNAL(clicked()), this, SLOT(slot_OnRadioTranStyleCoordCode()));
	connect(ui.radioButton_FromPicture, SIGNAL(clicked()), this, SLOT(slot_OnRadioTranStyleCodeCoord()));
	connect(ui.checkBox_BoolNewPicture, SIGNAL(clicked()), this, SLOT(ChecklineEdit_NewPitcureID()));
}

UI_MapFrameTool::~UI_MapFrameTool()
{
}

void UI_MapFrameTool::slot_OnRadioTranStyleCoordCode()
{
	
	m_iTransStyle = 1;
	ui.lineEdit_OldPitcureID->setText("");
	ui.lineEdit_NewPitcureID->setText("");
	slot_OnCheckUseNewMapCode();
	ChecklineEdit_NewPitcureID();
	ClearMapTabCoordCtrlData();
}

void UI_MapFrameTool::slot_OnRadioTranStyleCodeCoord()
{
	m_iTransStyle = 0;
	m_dCenterLY = 0;
	m_dCenterBX = 0;
	slot_OnCheckUseNewMapCode();
	ChecklineEdit_NewPitcureID();
	ClearMapTabCoordCtrlData();
}

void UI_MapFrameTool::slot_OnRadioMapScale100()
{
	m_iMapScale = 0;
	ClearMapTabCoordCtrlData();
	ui.lineEdit_OldPitcureID->setText("");
	ui.lineEdit_NewPitcureID->setText("");
	if (m_iTransStyle == 0)
		ui.lineEdit_OldPitcureID->setText("I50");
}

void UI_MapFrameTool::slot_OnRadioMapScale50()
{
	m_iMapScale = 1;
	ClearMapTabCoordCtrlData();
	ui.lineEdit_OldPitcureID->setText("");
	ui.lineEdit_NewPitcureID->setText("");
	if (m_iTransStyle == 0)
		ui.lineEdit_OldPitcureID->setText("I501");
}

void UI_MapFrameTool::slot_OnRadioMapScale25()
{
	m_iMapScale = 2;
	ClearMapTabCoordCtrlData();
	ui.lineEdit_OldPitcureID->setText("");
	ui.lineEdit_NewPitcureID->setText("");
	if (m_iTransStyle == 0)
		ui.lineEdit_OldPitcureID->setText("I5012");
}

void UI_MapFrameTool::slot_OnRadioMapScale10()
{
	m_iMapScale = 3;
	ClearMapTabCoordCtrlData();
	ui.lineEdit_OldPitcureID->setText("");
	ui.lineEdit_NewPitcureID->setText("");
	if (m_iTransStyle == 0)
		ui.lineEdit_OldPitcureID->setText("I50120");
}

void UI_MapFrameTool::slot_OnRadioMapScale5()
{
	m_iMapScale = 4;
	ClearMapTabCoordCtrlData();
	ui.lineEdit_OldPitcureID->setText("");
	ui.lineEdit_NewPitcureID->setText("");
	if (m_iTransStyle == 0)
		ui.lineEdit_OldPitcureID->setText("I501201");
}

void UI_MapFrameTool::slot_OnRadioMapScale25000()
{
	m_iMapScale = 5;
	ClearMapTabCoordCtrlData();
	ui.lineEdit_OldPitcureID->setText("");
	ui.lineEdit_NewPitcureID->setText("");
	if (m_iTransStyle == 0)
		ui.lineEdit_OldPitcureID->setText("I5012013");
}

void UI_MapFrameTool::slot_OnRadioMapScale1()
{
	m_iMapScale = 6;
	ClearMapTabCoordCtrlData();
	ui.lineEdit_OldPitcureID->setText("");
	ui.lineEdit_NewPitcureID->setText("");
	if (m_iTransStyle == 0)
		ui.lineEdit_OldPitcureID->setText("I5012063");
}

void UI_MapFrameTool::slot_OnCheckUseNewMapCode()
{
	if (ui.radioButton_FromPicture->isChecked() == true)
		ui.checkBox_BoolNewPicture->setEnabled(true);
	else
	{
		ui.checkBox_BoolNewPicture->setCheckState(Qt::Unchecked);
		ui.checkBox_BoolNewPicture->setEnabled(false);
	}
}

void UI_MapFrameTool::ChecklineEdit_NewPitcureID()
{
	if (ui.checkBox_BoolNewPicture->isChecked() == true)
		ui.lineEdit_NewPitcureID->setEnabled(true);
	else
		ui.lineEdit_NewPitcureID->setEnabled(false);
}

void UI_MapFrameTool::ClearMapTabCoordCtrlData()
{
	ui.lineEdit_LatBottomLeft->setText("0");
	ui.lineEdit_LatBottomRight->setText("0");
	ui.lineEdit_LatUpperLeft->setText("0");
	ui.lineEdit_LatUpperRight->setText("0");
	ui.lineEdit_LonBottomLeft->setText("0");
	ui.lineEdit_LonBottomRight->setText("0");
	ui.lineEdit_LonUpperLeft->setText("0");
	ui.lineEdit_LonUpperRight->setText("0");
	ui.lineEdit_table11->setText("");
	ui.lineEdit_table12->setText("");
	ui.lineEdit_table13->setText("");
	ui.lineEdit_table21->setText("");
	ui.lineEdit_table22->setText("");
	ui.lineEdit_table23->setText("");
	ui.lineEdit_table31->setText("");
	ui.lineEdit_table32->setText("");
	ui.lineEdit_table33->setText(""); 
}
void UI_MapFrameTool::slot_ButtonOK()
{
	// TODO: Add extra validation here
	int MapScale;

	//根据用户选择的给比例尺信息变量MapScale赋值
	switch (m_iMapScale)
	{
	case 0:
		MapScale = 100;
		break;
	case 1:
		MapScale = 50;
		break;
	case 2:
		MapScale = 25;
		break;
	case 3:
		MapScale = 10;
		break;
	case 4:
		MapScale = 5;
		break;
	case 5:
		MapScale = 25000;
		break;
	case 6:
		MapScale = 1;
		break;
	default:
		break;
	}


	if (m_iTransStyle == 0)//图幅编号计算图廓经纬度
	{
		m_bUseNewMapCode = ui.checkBox_BoolNewPicture->isChecked();
		if (!m_bUseNewMapCode)//使用传统图幅编号计算图廓点经纬度
		{
			if (ui.lineEdit_OldPitcureID->text() == "")
			{
				QMessageBox::warning(this, "warning", QString::fromLocal8Bit("请输入图幅编号！"));
				return;
			}
			Mapframeinfo.MapCode2LB(ui.lineEdit_OldPitcureID->text(), MapScale);
		}
		else//使用新图幅编号计算图廓点经纬度
		{
			if (ui.lineEdit_NewPitcureID->text().length() < 10)
			{
				QMessageBox::warning(this, "warning", QString::fromLocal8Bit("图幅编号输入不正确！！"));
				return;
			}
			Mapframeinfo.NeweMapCode2LB(ui.lineEdit_NewPitcureID->text(), MapScale);
		}
		m_dCenterLY = Mapframeinfo.DEG2DMS(Mapframeinfo.mL1 + Mapframeinfo.dL / 2.);
		m_dCenterBX = Mapframeinfo.DEG2DMS(Mapframeinfo.mB1 + Mapframeinfo.dB / 2.);
		ui.lineEdit_PictureLat->setText(QString::number(m_dCenterBX, 'f', 4));
		ui.lineEdit_PictureLon->setText(QString::number(m_dCenterLY, 'f', 4));
		//用计算出的图幅中心点经纬度再算回图号，为了使界面上显示的新旧图号对应同一图幅
		QString m_csMapCode = Mapframeinfo.LB2MapCode(Mapframeinfo.DMS2DEG(m_dCenterLY), Mapframeinfo.DMS2DEG(m_dCenterBX), MapScale);
		ui.lineEdit_OldPitcureID->setText(m_csMapCode);
		ui.lineEdit_NewPitcureID->setText(Mapframeinfo.NewMapCode);

		//设置图廓点经纬度
		m_dFrameLY1 = Mapframeinfo.DEG2DMS(Mapframeinfo.mL1);
		m_dFrameBX1 = Mapframeinfo.DEG2DMS(Mapframeinfo.mB1);
		m_dFrameLY2 = Mapframeinfo.DEG2DMS(Mapframeinfo.mL2);
		m_dFrameBX2 = Mapframeinfo.DEG2DMS(Mapframeinfo.mB2);
		m_dFrameLY3 = Mapframeinfo.DEG2DMS(Mapframeinfo.mL3);
		m_dFrameBX3 = Mapframeinfo.DEG2DMS(Mapframeinfo.mB3);
		m_dFrameLY4 = Mapframeinfo.DEG2DMS(Mapframeinfo.mL4);
		m_dFrameBX4 = Mapframeinfo.DEG2DMS(Mapframeinfo.mB4);

		ui.lineEdit_LonUpperLeft->setText(QString::number(m_dFrameLY4, 'f', 4));
		ui.lineEdit_LatUpperLeft->setText(QString::number(m_dFrameBX4, 'f', 4));
		ui.lineEdit_LonUpperRight->setText(QString::number(m_dFrameLY3, 'f', 4));
		ui.lineEdit_LatUpperRight->setText(QString::number(m_dFrameBX3, 'f', 4));
		ui.lineEdit_LonBottomLeft->setText(QString::number(m_dFrameLY1, 'f', 4));
		ui.lineEdit_LatBottomLeft->setText(QString::number(m_dFrameBX1, 'f', 4));
		ui.lineEdit_LonBottomRight->setText(QString::number(m_dFrameLY2, 'f', 4));
		ui.lineEdit_LatBottomRight->setText(QString::number(m_dFrameBX2, 'f', 4));
	}
	else if (m_iTransStyle == 1)//经纬度计算图幅编号
	{
		m_dCenterLY = atof(ui.lineEdit_PictureLon->text().toUtf8());
		m_dCenterBX = atof(ui.lineEdit_PictureLat->text().toUtf8());

		//判断是否在我国境内
		if (m_dCenterLY < 70 || m_dCenterLY>140 || m_dCenterBX < 3 || m_dCenterBX>50)
		{
			QMessageBox::warning(this, "warning", QString::fromLocal8Bit("经纬度数值不在我国境内，请重新输入！"));
			return;
		}

		QString m_csMapCode = Mapframeinfo.LB2MapCode(Mapframeinfo.DMS2DEG(m_dCenterLY), Mapframeinfo.DMS2DEG(m_dCenterBX), MapScale);
		ui.lineEdit_OldPitcureID->setText(m_csMapCode);
		//用计算出和图号再算回经纬度，以设置图幅经纬度信息
		Mapframeinfo.MapCode2LB(m_csMapCode, MapScale);


		QString m_NewMapCode = Mapframeinfo.NewMapCode;
		ui.lineEdit_NewPitcureID->setText(m_NewMapCode);

		m_dFrameLY1 = Mapframeinfo.DEG2DMS(Mapframeinfo.mL1);
		m_dFrameBX1 = Mapframeinfo.DEG2DMS(Mapframeinfo.mB1);
		m_dFrameLY2 = Mapframeinfo.DEG2DMS(Mapframeinfo.mL2);
		m_dFrameBX2 = Mapframeinfo.DEG2DMS(Mapframeinfo.mB2);
		m_dFrameLY3 = Mapframeinfo.DEG2DMS(Mapframeinfo.mL3);
		m_dFrameBX3 = Mapframeinfo.DEG2DMS(Mapframeinfo.mB3);
		m_dFrameLY4 = Mapframeinfo.DEG2DMS(Mapframeinfo.mL4);
		m_dFrameBX4 = Mapframeinfo.DEG2DMS(Mapframeinfo.mB4);

		ui.lineEdit_LonUpperLeft->setText(QString::number(m_dFrameLY4, 'f', 4));
		ui.lineEdit_LatUpperLeft->setText(QString::number(m_dFrameBX4, 'f', 4));
		ui.lineEdit_LonUpperRight->setText(QString::number(m_dFrameLY3, 'f', 4));
		ui.lineEdit_LatUpperRight->setText(QString::number(m_dFrameBX3, 'f', 4));
		ui.lineEdit_LonBottomLeft->setText(QString::number(m_dFrameLY1, 'f', 4));
		ui.lineEdit_LatBottomLeft->setText(QString::number(m_dFrameBX1, 'f', 4));
		ui.lineEdit_LonBottomRight->setText(QString::number(m_dFrameLY2, 'f', 4));
		ui.lineEdit_LatBottomRight->setText(QString::number(m_dFrameBX2, 'f', 4));

	}

	//计算接图表
	double dCenterL;
	double dCenterB;

	//Mapframeinfo.MapCode2LB(ui.lineEdit_OldPitcureID->text(),MapScale);

	dCenterL = Mapframeinfo.mL1 + Mapframeinfo.dL / 2.0;
	dCenterB = Mapframeinfo.mB1 + Mapframeinfo.dB / 2.0;

	QString m_csMap1 = Mapframeinfo.MapCode;

	QString m_csMap2 = Mapframeinfo.LB2MapCode(dCenterL - Mapframeinfo.dL, dCenterB + Mapframeinfo.dB, MapScale);
	QString m_csMap3 = Mapframeinfo.LB2MapCode(dCenterL, dCenterB + Mapframeinfo.dB, MapScale);
	QString m_csMap4 = Mapframeinfo.LB2MapCode(dCenterL + Mapframeinfo.dL, dCenterB + Mapframeinfo.dB, MapScale);
	QString m_csMap5 = Mapframeinfo.LB2MapCode(dCenterL - Mapframeinfo.dL, dCenterB, MapScale);
	QString m_csMap6 = Mapframeinfo.LB2MapCode(dCenterL + Mapframeinfo.dL, dCenterB, MapScale);
	QString m_csMap7 = Mapframeinfo.LB2MapCode(dCenterL - Mapframeinfo.dL, dCenterB - Mapframeinfo.dB, MapScale);
	QString m_csMap8 = Mapframeinfo.LB2MapCode(dCenterL, dCenterB - Mapframeinfo.dB, MapScale);
	QString m_csMap9 = Mapframeinfo.LB2MapCode(dCenterL + Mapframeinfo.dL, dCenterB - Mapframeinfo.dB, MapScale);
	ui.lineEdit_table11->setText(m_csMap2);
	ui.lineEdit_table12->setText(m_csMap3);
	ui.lineEdit_table13->setText(m_csMap4);
	ui.lineEdit_table21->setText(m_csMap5);
	ui.lineEdit_table22->setText(m_csMap1);
	ui.lineEdit_table23->setText(m_csMap6);
	ui.lineEdit_table31->setText(m_csMap7);
	ui.lineEdit_table32->setText(m_csMap8);
	ui.lineEdit_table33->setText(m_csMap9);
}