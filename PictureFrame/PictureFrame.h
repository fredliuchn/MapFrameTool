#pragma once

#include <QtWidgets/QMainWindow>
#include <QWidget>
#include "PictureFrameInfo.h"
#include "ui_PictureFrame.h"

class PictureFrame : public QMainWindow
{
	Q_OBJECT

public:
	PictureFrame(QWidget* parent = 0, Qt::WindowFlags f = 0);
	~PictureFrame();
	int m_iTransStyle, m_iMapScale;
	double	m_dCenterLY;
	double	m_dCenterBX;
	double	m_dFrameBX1;
	double	m_dFrameBX2;
	double	m_dFrameBX3;
	double	m_dFrameBX4;
	double	m_dFrameLY1;
	double	m_dFrameLY2;
	double	m_dFrameLY3;
	double	m_dFrameLY4;
	bool m_bUseNewMapCode;
	PictureFrameInfo Mapframeinfo;
	private slots:

	void slot_ButtonOK();

	void slot_OnRadioTranStyleCoordCode();

	void slot_OnRadioTranStyleCodeCoord();

	void slot_OnRadioMapScale100();

	void slot_OnRadioMapScale50();

	void slot_OnRadioMapScale25();

	void slot_OnRadioMapScale10();

	void slot_OnRadioMapScale5();

	void slot_OnRadioMapScale25000();

	void slot_OnRadioMapScale1();

	void slot_OnCheckUseNewMapCode();
	
	void ChecklineEdit_NewPitcureID();

	void ClearMapTabCoordCtrlData();
	
private:
	Ui::PictureFrame ui;
};
