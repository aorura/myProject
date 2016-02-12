#include "testpango.h"
#include <QtGui/QApplication>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	TestPango w;
	w.show();
	return a.exec();
}
