#include <QtWidgets/QApplication>
#include "PictureFrame.h"

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	PictureFrame *nDialog = new PictureFrame();
	nDialog->show();
	return a.exec();
}
