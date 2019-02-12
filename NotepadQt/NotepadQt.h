#pragma once

#include <QtWidgets/QMainWindow>
#include <Qfile>
#include <QfileDialog>
#include <QTextStream>
#include <QMessageBox>
#include <QPrinter>
#include <QPrintDialog>
#include "ui_NotepadQt.h"

#include <iostream>

namespace Ui {
	class NotepadQt;
}

class NotepadQt : public QMainWindow
{
	Q_OBJECT

public:
	NotepadQt(QWidget *parent = Q_NULLPTR);
	~NotepadQt();

public slots:
	void on_actionOpen_triggered();
	void on_actionSave_as_triggered();
	void on_actionPrint_triggered();
private:

	Ui::NotepadQt* ui;
	QString currentFile = "";
};
