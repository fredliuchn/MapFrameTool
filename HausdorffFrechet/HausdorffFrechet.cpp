#include "HausdorffFrechet.h"
#include <QtWidgets>

HausdorffFrechet::HausdorffFrechet(QWidget *parent)
    : QMainWindow(parent)
{
    ui.setupUi(this);
	connect(ui.action1_1, SIGNAL(triggered()), this, SLOT(slot_openshpfile()));
	connect(ui.action1_2, SIGNAL(triggered()), this, SLOT(slot_openshpfile()));
	connect(ui.action1_3, SIGNAL(triggered()), this, SLOT(close()));
	//QAction *helpAction = ui.menu_quit->addAction("Help");
	ui.menuBar->addAction(tr("退出"), this, SLOT(close()));
	//connect(ui.menu_quit, SIGNAL(triggered(QAction*)), this, SLOT(close()));
}

void HausdorffFrechet::slot_openshpfile()
{
	QString strInputFile = QFileDialog::getOpenFileName(this, tr("请选择矢量数据"), "", tr("ESRI Shapefile(*.shp)"));
	if (strInputFile.isEmpty())
		return;
}