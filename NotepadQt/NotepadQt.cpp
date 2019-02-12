#include "NotepadQt.h"

NotepadQt::NotepadQt(QWidget *parent)
	: QMainWindow(parent),
	ui(new Ui::NotepadQt)
{
	ui->setupUi(this);
	this->setCentralWidget(ui->textEdit);
}

NotepadQt::~NotepadQt() 
{
	delete ui;
}

void NotepadQt::on_actionOpen_triggered()
{
	QString filePath = QFileDialog::getOpenFileName(this, "Open the file");
	QFile file(filePath);
	currentFile = filePath;
	if (!file.open(QIODevice::ReadOnly | QFile::Text))
	{
		QMessageBox::warning(this, "Warning", "Warning could not open file correctly: " + file.errorString());
		return;
	}
	setWindowTitle(currentFile);
	QTextStream in(&file);
	QString text = in.readAll();
	ui->textEdit->setText(text);
	file.close();
}

void NotepadQt::on_actionSave_as_triggered() 
{
	QString filePath = QFileDialog::getSaveFileName(this, "Save the file");
	QFile file(filePath);
	if (!file.open(QFile::WriteOnly | QFile::Text))
	{
		QMessageBox::warning(this, "Warning", "Warning could not save file correctly: " + file.errorString());
		return;
	}
	currentFile = filePath;
	setWindowTitle(currentFile);
	QTextStream out(&file);
	QString text = ui->textEdit->toPlainText();
	out << text;
	file.close();
}

void NotepadQt::on_actionSave_triggered() 
{
	QString filePath;
	if (currentFile.isEmpty())
	{
		filePath = QFileDialog::getSaveFileName(this, "Save");
		currentFile = filePath;
	}
	else
	{
		filePath = currentFile;
	}

	QFile file(filePath);
	if (!file.open(QFile::WriteOnly | QFile::Text))
	{
		QMessageBox::warning(this, "Warning", "Warning could not save file correctly: " + file.errorString());
		return;
	}
	currentFile = filePath;
	setWindowTitle(currentFile);
	QTextStream out(&file);
	QString text = ui->textEdit->toPlainText();
	out << text;
	file.close();
}

void NotepadQt::on_actionPrint_triggered() 
{
	QPrinter printer;
	printer.setPrinterName("Printer Name");
	QPrintDialog aPrinterDialog(&printer, this);
	if (aPrinterDialog.exec() == QDialog::Rejected)
	{
		QMessageBox::warning(this, "Warning", "This file cannot print.");
		return;
	}
	ui->textEdit->print(&printer);
}

void NotepadQt::on_actionFont_triggered() 
{
	bool fontSelected;
	QFont font = QFontDialog::getFont(&fontSelected, this);
	if (fontSelected)
		ui->textEdit->setFont(font);
}