/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.7.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QPushButton *SwitchPlayer1;
    QPushButton *SwitchPlayer2;
    QProgressBar *progressBar1;
    QProgressBar *progressBar_2;
    QLabel *Gamelabel;
    QPushButton *sec;
    QPushButton *min;
    QPushButton *STARTGAME;
    QPushButton *STOPGAME;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(800, 600);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        SwitchPlayer1 = new QPushButton(centralwidget);
        SwitchPlayer1->setObjectName("SwitchPlayer1");
        SwitchPlayer1->setGeometry(QRect(10, 40, 101, 29));
        SwitchPlayer2 = new QPushButton(centralwidget);
        SwitchPlayer2->setObjectName("SwitchPlayer2");
        SwitchPlayer2->setGeometry(QRect(212, 40, 91, 29));
        progressBar1 = new QProgressBar(centralwidget);
        progressBar1->setObjectName("progressBar1");
        progressBar1->setGeometry(QRect(10, 10, 118, 23));
        progressBar1->setValue(0);
        progressBar_2 = new QProgressBar(centralwidget);
        progressBar_2->setObjectName("progressBar_2");
        progressBar_2->setGeometry(QRect(210, 10, 118, 23));
        progressBar_2->setValue(0);
        Gamelabel = new QLabel(centralwidget);
        Gamelabel->setObjectName("Gamelabel");
        Gamelabel->setGeometry(QRect(70, 130, 171, 20));
        sec = new QPushButton(centralwidget);
        sec->setObjectName("sec");
        sec->setGeometry(QRect(50, 170, 83, 29));
        min = new QPushButton(centralwidget);
        min->setObjectName("min");
        min->setGeometry(QRect(160, 170, 83, 29));
        STARTGAME = new QPushButton(centralwidget);
        STARTGAME->setObjectName("STARTGAME");
        STARTGAME->setGeometry(QRect(40, 290, 101, 29));
        STOPGAME = new QPushButton(centralwidget);
        STOPGAME->setObjectName("STOPGAME");
        STOPGAME->setGeometry(QRect(170, 290, 91, 29));
        MainWindow->setCentralWidget(centralwidget);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        SwitchPlayer1->setText(QCoreApplication::translate("MainWindow", "Switch Player", nullptr));
        SwitchPlayer2->setText(QCoreApplication::translate("MainWindow", "Switch Player", nullptr));
        Gamelabel->setText(QCoreApplication::translate("MainWindow", "Game", nullptr));
        sec->setText(QCoreApplication::translate("MainWindow", "120 sec", nullptr));
        min->setText(QCoreApplication::translate("MainWindow", "5 min", nullptr));
        STARTGAME->setText(QCoreApplication::translate("MainWindow", "START GAME", nullptr));
        STOPGAME->setText(QCoreApplication::translate("MainWindow", "STOP GAME", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
