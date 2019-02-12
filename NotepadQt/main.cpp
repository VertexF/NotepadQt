#include "NotepadQt.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	NotepadQt w;
	w.show();
	return a.exec();
}
