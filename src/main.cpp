#include "main_widget.h"
#include <QApplication>


int main(int argc, char* argv[])
{
	QApplication app(argc, argv);

	MainWidget w;
	w.show();

	return app.exec();
}