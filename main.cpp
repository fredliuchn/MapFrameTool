//#include <QtCore/QCoreApplication>
#include <QtWidgets/QApplication>
#include "UI_MapFrameTool.h"

int main(int argc, char *argv[])
{
	//QCoreApplication a(argc, argv);
	QApplication a(argc, argv);
	UI_MapFrameTool UIFrame;
	UIFrame.show();
	return a.exec();
}
