/********************************************************************************
** Form generated from reading UI file 'NotepadQt.ui'
**
** Created by: Qt User Interface Compiler version 5.12.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NOTEPADQT_H
#define UI_NOTEPADQT_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_NotepadQt
{
public:
    QAction *actionNew;
    QAction *actionOpen;
    QAction *actionSave_as;
    QAction *actionPrint;
    QAction *actionExit;
    QAction *actionCopy;
    QAction *actionPaste;
    QAction *actionCut;
    QAction *actionUndo;
    QAction *actionRedo;
    QWidget *centralWidget;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QTextEdit *textEdit;
    QMenuBar *menuBar;
    QMenu *menuFile;
    QMenu *menuEdit;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *NotepadQt)
    {
        if (NotepadQt->objectName().isEmpty())
            NotepadQt->setObjectName(QString::fromUtf8("NotepadQt"));
        NotepadQt->resize(862, 619);
        actionNew = new QAction(NotepadQt);
        actionNew->setObjectName(QString::fromUtf8("actionNew"));
        QIcon icon;
        icon.addFile(QString::fromUtf8("Resources/new.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionNew->setIcon(icon);
        actionOpen = new QAction(NotepadQt);
        actionOpen->setObjectName(QString::fromUtf8("actionOpen"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8("Resources/open.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionOpen->setIcon(icon1);
        actionSave_as = new QAction(NotepadQt);
        actionSave_as->setObjectName(QString::fromUtf8("actionSave_as"));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8("Resources/saveas.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionSave_as->setIcon(icon2);
        actionPrint = new QAction(NotepadQt);
        actionPrint->setObjectName(QString::fromUtf8("actionPrint"));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8("Resources/print.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionPrint->setIcon(icon3);
        actionExit = new QAction(NotepadQt);
        actionExit->setObjectName(QString::fromUtf8("actionExit"));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8("Resources/exit.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionExit->setIcon(icon4);
        actionCopy = new QAction(NotepadQt);
        actionCopy->setObjectName(QString::fromUtf8("actionCopy"));
        QIcon icon5;
        icon5.addFile(QString::fromUtf8("Resources/ccopy.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionCopy->setIcon(icon5);
        actionPaste = new QAction(NotepadQt);
        actionPaste->setObjectName(QString::fromUtf8("actionPaste"));
        QIcon icon6;
        icon6.addFile(QString::fromUtf8("Resources/paste.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionPaste->setIcon(icon6);
        actionCut = new QAction(NotepadQt);
        actionCut->setObjectName(QString::fromUtf8("actionCut"));
        QIcon icon7;
        icon7.addFile(QString::fromUtf8("Resources/cut.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionCut->setIcon(icon7);
        actionUndo = new QAction(NotepadQt);
        actionUndo->setObjectName(QString::fromUtf8("actionUndo"));
        actionRedo = new QAction(NotepadQt);
        actionRedo->setObjectName(QString::fromUtf8("actionRedo"));
        centralWidget = new QWidget(NotepadQt);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        verticalLayoutWidget = new QWidget(centralWidget);
        verticalLayoutWidget->setObjectName(QString::fromUtf8("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(200, 100, 160, 80));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        textEdit = new QTextEdit(verticalLayoutWidget);
        textEdit->setObjectName(QString::fromUtf8("textEdit"));

        verticalLayout->addWidget(textEdit);

        NotepadQt->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(NotepadQt);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 862, 21));
        menuFile = new QMenu(menuBar);
        menuFile->setObjectName(QString::fromUtf8("menuFile"));
        menuEdit = new QMenu(menuBar);
        menuEdit->setObjectName(QString::fromUtf8("menuEdit"));
        NotepadQt->setMenuBar(menuBar);
        mainToolBar = new QToolBar(NotepadQt);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        NotepadQt->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(NotepadQt);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        NotepadQt->setStatusBar(statusBar);

        menuBar->addAction(menuFile->menuAction());
        menuBar->addAction(menuEdit->menuAction());
        menuFile->addAction(actionNew);
        menuFile->addAction(actionOpen);
        menuFile->addAction(actionSave_as);
        menuFile->addAction(actionPrint);
        menuFile->addSeparator();
        menuFile->addAction(actionExit);
        menuEdit->addAction(actionCopy);
        menuEdit->addAction(actionPaste);
        menuEdit->addAction(actionCut);
        menuEdit->addSeparator();
        menuEdit->addAction(actionUndo);
        menuEdit->addAction(actionRedo);
        mainToolBar->addAction(actionNew);
        mainToolBar->addAction(actionOpen);
        mainToolBar->addAction(actionCopy);
        mainToolBar->addAction(actionPaste);
        mainToolBar->addAction(actionSave_as);
        mainToolBar->addAction(actionPrint);

        retranslateUi(NotepadQt);
        QObject::connect(actionExit, SIGNAL(triggered()), NotepadQt, SLOT(close()));
        QObject::connect(actionCopy, SIGNAL(triggered()), textEdit, SLOT(copy()));
        QObject::connect(actionCut, SIGNAL(triggered()), textEdit, SLOT(cut()));
        QObject::connect(actionNew, SIGNAL(triggered()), textEdit, SLOT(clear()));
        QObject::connect(actionPaste, SIGNAL(triggered()), textEdit, SLOT(paste()));
        QObject::connect(actionRedo, SIGNAL(triggered()), textEdit, SLOT(redo()));
        QObject::connect(actionUndo, SIGNAL(triggered()), textEdit, SLOT(undo()));

        QMetaObject::connectSlotsByName(NotepadQt);
    } // setupUi

    void retranslateUi(QMainWindow *NotepadQt)
    {
        NotepadQt->setWindowTitle(QApplication::translate("NotepadQt", "NotepadQt", nullptr));
        actionNew->setText(QApplication::translate("NotepadQt", "New", nullptr));
        actionOpen->setText(QApplication::translate("NotepadQt", "Open...", nullptr));
        actionSave_as->setText(QApplication::translate("NotepadQt", "Save as...", nullptr));
        actionPrint->setText(QApplication::translate("NotepadQt", "Print...", nullptr));
        actionExit->setText(QApplication::translate("NotepadQt", "Exit", nullptr));
        actionCopy->setText(QApplication::translate("NotepadQt", "Copy", nullptr));
        actionPaste->setText(QApplication::translate("NotepadQt", "Paste", nullptr));
        actionCut->setText(QApplication::translate("NotepadQt", "Cut", nullptr));
        actionUndo->setText(QApplication::translate("NotepadQt", "Undo", nullptr));
        actionRedo->setText(QApplication::translate("NotepadQt", "Redo", nullptr));
        menuFile->setTitle(QApplication::translate("NotepadQt", "File", nullptr));
        menuEdit->setTitle(QApplication::translate("NotepadQt", "Edit", nullptr));
    } // retranslateUi

};

namespace Ui {
    class NotepadQt: public Ui_NotepadQt {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NOTEPADQT_H
