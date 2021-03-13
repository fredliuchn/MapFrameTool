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


	//���ֱ�����ͼ�����γ���λΪ��
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
	//�Ƕȵ�λת�����ȷ���ת��Ϊ��
	/***************************************************************************/
	double DMS2DEG(double T0);

	/***************************************************************************/
	//�Ƕȵ�λת������ת��Ϊ�ȷ���    
	/***************************************************************************/
	double DEG2DMS(double T0);

	/***************************************************************************/
	//���ݴ�ͳͼ����ͼ���㾭γ��,ͼ��Ҫ��8λ������8λ�����Զ��ں���
	//��������Ӧͼ������γ������๫������dL,dB��
	//ͼ���ǵ㾭γ�ȱ������๫��������
	/***************************************************************************/
	void MapCode2LB(QString MapCode, int MapCodeScale);

	/***************************************************************************/
	//������ͼ�������ͼ���㾭γ��,ͼ��Ҫ��Ϊ:I49E023012��ʽ
	//��������Ӧͼ������γ������๫������dL,dB��
	//ͼ�����½Ǿ�γ�������õ��õĲ���L��B����
	/***************************************************************************/
	void NeweMapCode2LB(QString NewMapCode, int MapCodeScale);

	//����ͼ�����ĵ㾭γ�������ͼ�ţ�Ϊ��ʹ��������ʾ���¾�ͼ�Ŷ�Ӧͬһͼ��
	QString LB2MapCode(double L, double B, int MapCodeScale = 5, bool isNewMapCode = false, bool isFirstLetter = true);

	/***************************************************************************/
	// ����dn*dn�����а������ҡ����ϵ������е�˳���Ϊxh�Ŀ����½ǵ������
	// �����������½ǵľ��γ��
	// 
	// xhΪ˳��ţ�dnΪ���е���������dL��dBΪÿ�С�ÿ�е������
	// 
	// ����������������½ǵľ��γ����������๫������dL��dB��
	/***************************************************************************/
	void Number2dLdB(int xh, int dn, double dL, double dB);

};
#endif