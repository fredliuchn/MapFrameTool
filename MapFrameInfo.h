#ifndef CMAP_FRAME_INFO_WTH
#define CMAP_FRAME_INFO_WTH

#if _MSC_VER > 1900
#pragma once
#endif

#include "math.h"
#include <QMessageBox>

class CMapFrameInfo
{
public:
	CMapFrameInfo();
	~CMapFrameInfo();

	CMapFrameInfo(QString MapCode, int MapScale = 5);

	double dL, dB;
	double mL1, mB1;                   //    4---------3
	double mL2, mB2;                   //    |         |
	double mL3, mB3;                   //    |         |
	double mL4, mB4;                   //    1---------2
	int MapScale;
	QString MapCode;
	QString NewMapCode;


	//各种比例尺图幅经差、纬差，单位为度
	double dL100;
	double dB100;
	double dL50;
	double dB50;
	double dL25;
	double dB25;
	double dL10;
	double dB10;
	double dL5;
	double dB5;
	double dL2d5;
	double dB2d5;
	double dL1;
	double dB1;

	/***************************************************************************/
	//角度单位转换，度分秒转换为度
	/***************************************************************************/
	double DMS2DEG(double T0);

	/***************************************************************************/
	//角度单位转换，度转换为度分秒    
	/***************************************************************************/
	double DEG2DMS(double T0);

	/***************************************************************************/
	//根据传统图号求图廓点经纬度,图号要求8位，不足8位程序自动在后补零
	//计算结果相应图幅经差纬差保存在类公共变量dL,dB中
	//图幅角点经纬度保存在类公共变量中
	/***************************************************************************/
	void MapCode2LB(QString MapCode, int MapCodeScale);

	/***************************************************************************/
	//根据新图幅编号求图廓点经纬度,图号要求为:I49E023012格式
	//计算结果相应图幅经差纬差保存在类公共变量dL,dB中
	//图幅左下角经纬度由引用调用的参数L、B返回
	/***************************************************************************/
	void NeweMapCode2LB(QString NewMapCode, int MapCodeScale);

	//根据图幅中心点经纬度再算回图号，为了使界面上显示的新旧图号对应同一图幅
	QString LB2MapCode(double L, double B, int MapCodeScale = 5, bool isNewMapCode = false, bool isFirstLetter = true);

	/***************************************************************************/
	// 计算dn*dn阵列中按从左到右、从上到下排列的顺序号为xh的块左下角点相对于
	// 整个阵列左下角的经差、纬差
	// 
	// xh为顺序号，dn为阵列的行列数，dL、dB为每列、每行的坐标差
	// 
	// 相对于整个阵列左下角的经差、纬差结果存放在类公共变量dL、dB中
	/***************************************************************************/
	void Number2dLdB(int xh, int dn, double dL, double dB);

};
#endif