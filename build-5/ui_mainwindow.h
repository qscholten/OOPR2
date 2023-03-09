/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QPushButton *sensor_act;
    QPushButton *schuifdeurKnop;
    QPushButton *draaideurKnop1;
    QPushButton *draaideurKnop2;
    QLineEdit *lineEditQing;
    QLineEdit *lineEditPiep;
    QLineEdit *lineEdit2023;
    QLabel *labelPiep;
    QLabel *label2023;
    QLabel *labelQing;
    QLineEdit *lineEditOOPR;
    QLabel *labelOOPR;
    QLineEdit *lineEdit2020;
    QLabel *label2020;
    QLineEdit *lineEditAddPerson;
    QLabel *labelAdd;
    QPushButton *allowKnop;
    QPushButton *denyKnop;
    QTextBrowser *kaartenbak;
    QPushButton *kaartenbakKnop;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(730, 431);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName("centralWidget");
        sensor_act = new QPushButton(centralWidget);
        sensor_act->setObjectName("sensor_act");
        sensor_act->setGeometry(QRect(510, 100, 31, 31));
        schuifdeurKnop = new QPushButton(centralWidget);
        schuifdeurKnop->setObjectName("schuifdeurKnop");
        schuifdeurKnop->setGeometry(QRect(510, 230, 31, 31));
        draaideurKnop1 = new QPushButton(centralWidget);
        draaideurKnop1->setObjectName("draaideurKnop1");
        draaideurKnop1->setGeometry(QRect(250, 130, 31, 31));
        draaideurKnop2 = new QPushButton(centralWidget);
        draaideurKnop2->setObjectName("draaideurKnop2");
        draaideurKnop2->setGeometry(QRect(300, 240, 31, 31));
        lineEditQing = new QLineEdit(centralWidget);
        lineEditQing->setObjectName("lineEditQing");
        lineEditQing->setGeometry(QRect(550, 230, 71, 22));
        lineEditPiep = new QLineEdit(centralWidget);
        lineEditPiep->setObjectName("lineEditPiep");
        lineEditPiep->setGeometry(QRect(290, 140, 71, 22));
        lineEdit2023 = new QLineEdit(centralWidget);
        lineEdit2023->setObjectName("lineEdit2023");
        lineEdit2023->setGeometry(QRect(340, 250, 71, 22));
        labelPiep = new QLabel(centralWidget);
        labelPiep->setObjectName("labelPiep");
        labelPiep->setGeometry(QRect(290, 120, 71, 16));
        label2023 = new QLabel(centralWidget);
        label2023->setObjectName("label2023");
        label2023->setGeometry(QRect(340, 230, 71, 16));
        labelQing = new QLabel(centralWidget);
        labelQing->setObjectName("labelQing");
        labelQing->setGeometry(QRect(550, 210, 71, 16));
        lineEditOOPR = new QLineEdit(centralWidget);
        lineEditOOPR->setObjectName("lineEditOOPR");
        lineEditOOPR->setGeometry(QRect(340, 210, 71, 22));
        labelOOPR = new QLabel(centralWidget);
        labelOOPR->setObjectName("labelOOPR");
        labelOOPR->setGeometry(QRect(340, 190, 81, 16));
        lineEdit2020 = new QLineEdit(centralWidget);
        lineEdit2020->setObjectName("lineEdit2020");
        lineEdit2020->setGeometry(QRect(550, 280, 71, 22));
        label2020 = new QLabel(centralWidget);
        label2020->setObjectName("label2020");
        label2020->setGeometry(QRect(550, 260, 71, 16));
        lineEditAddPerson = new QLineEdit(centralWidget);
        lineEditAddPerson->setObjectName("lineEditAddPerson");
        lineEditAddPerson->setGeometry(QRect(580, 30, 71, 22));
        labelAdd = new QLabel(centralWidget);
        labelAdd->setObjectName("labelAdd");
        labelAdd->setGeometry(QRect(580, 10, 71, 16));
        allowKnop = new QPushButton(centralWidget);
        allowKnop->setObjectName("allowKnop");
        allowKnop->setGeometry(QRect(660, 0, 41, 31));
        denyKnop = new QPushButton(centralWidget);
        denyKnop->setObjectName("denyKnop");
        denyKnop->setGeometry(QRect(660, 40, 41, 31));
        kaartenbak = new QTextBrowser(centralWidget);
        kaartenbak->setObjectName("kaartenbak");
        kaartenbak->setGeometry(QRect(550, 120, 171, 91));
        kaartenbakKnop = new QPushButton(centralWidget);
        kaartenbakKnop->setObjectName("kaartenbakKnop");
        kaartenbakKnop->setGeometry(QRect(550, 80, 111, 31));
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName("menuBar");
        menuBar->setGeometry(QRect(0, 0, 730, 17));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName("mainToolBar");
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName("statusBar");
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        sensor_act->setText(QCoreApplication::translate("MainWindow", "s1", nullptr));
        schuifdeurKnop->setText(QCoreApplication::translate("MainWindow", "vd", nullptr));
        draaideurKnop1->setText(QCoreApplication::translate("MainWindow", "d1", nullptr));
        draaideurKnop2->setText(QCoreApplication::translate("MainWindow", "d2", nullptr));
        labelPiep->setText(QCoreApplication::translate("MainWindow", "Code: Piep", nullptr));
        label2023->setText(QCoreApplication::translate("MainWindow", "Code: 2023", nullptr));
        labelQing->setText(QCoreApplication::translate("MainWindow", "Code: Qing", nullptr));
        labelOOPR->setText(QCoreApplication::translate("MainWindow", "Access kaart OOPR", nullptr));
        label2020->setText(QCoreApplication::translate("MainWindow", "Access kaart 2020", nullptr));
        labelAdd->setText(QCoreApplication::translate("MainWindow", "Add Person", nullptr));
        allowKnop->setText(QCoreApplication::translate("MainWindow", "Allow", nullptr));
        denyKnop->setText(QCoreApplication::translate("MainWindow", "Deny", nullptr));
        kaartenbakKnop->setText(QCoreApplication::translate("MainWindow", "Show Kaartenbak", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
