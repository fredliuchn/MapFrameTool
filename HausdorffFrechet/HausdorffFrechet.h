#pragma once

#ifdef _WIN32
#pragma execution_character_set("utf-8")
#endif

#include <QtWidgets/QMainWindow>
#include "ui_HausdorffFrechet.h"

class HausdorffFrechet : public QMainWindow
{
    Q_OBJECT

public:
    HausdorffFrechet(QWidget *parent = Q_NULLPTR);

private slots:
	
	//打开shp文件
	void slot_openshpfile();

private:
    Ui::HausdorffFrechetClass ui;
};
