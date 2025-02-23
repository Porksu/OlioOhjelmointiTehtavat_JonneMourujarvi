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
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QLineEdit *numero1;
    QLineEdit *numero2;
    QLineEdit *tulos;
    QPushButton *num1;
    QPushButton *num2;
    QPushButton *num3;
    QPushButton *num4;
    QPushButton *num5;
    QPushButton *num6;
    QPushButton *num7;
    QPushButton *num8;
    QPushButton *num9;
    QPushButton *plussa;
    QLabel *Numero1text;
    QLabel *Numero2text;
    QLabel *Tulostext;
    QPushButton *num0;
    QPushButton *clear;
    QPushButton *enter;
    QPushButton *miinus;
    QPushButton *kerto;
    QPushButton *jako;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(459, 230);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        numero1 = new QLineEdit(centralwidget);
        numero1->setObjectName("numero1");
        numero1->setGeometry(QRect(50, 30, 113, 28));
        numero2 = new QLineEdit(centralwidget);
        numero2->setObjectName("numero2");
        numero2->setGeometry(QRect(180, 30, 113, 28));
        tulos = new QLineEdit(centralwidget);
        tulos->setObjectName("tulos");
        tulos->setGeometry(QRect(320, 30, 113, 28));
        num1 = new QPushButton(centralwidget);
        num1->setObjectName("num1");
        num1->setGeometry(QRect(50, 70, 83, 29));
        num2 = new QPushButton(centralwidget);
        num2->setObjectName("num2");
        num2->setGeometry(QRect(150, 70, 83, 29));
        num3 = new QPushButton(centralwidget);
        num3->setObjectName("num3");
        num3->setGeometry(QRect(250, 70, 83, 29));
        num4 = new QPushButton(centralwidget);
        num4->setObjectName("num4");
        num4->setGeometry(QRect(50, 110, 83, 29));
        num5 = new QPushButton(centralwidget);
        num5->setObjectName("num5");
        num5->setGeometry(QRect(150, 110, 83, 29));
        num6 = new QPushButton(centralwidget);
        num6->setObjectName("num6");
        num6->setGeometry(QRect(250, 110, 83, 29));
        num7 = new QPushButton(centralwidget);
        num7->setObjectName("num7");
        num7->setGeometry(QRect(50, 150, 83, 29));
        num8 = new QPushButton(centralwidget);
        num8->setObjectName("num8");
        num8->setGeometry(QRect(150, 150, 83, 29));
        num9 = new QPushButton(centralwidget);
        num9->setObjectName("num9");
        num9->setGeometry(QRect(250, 150, 83, 29));
        plussa = new QPushButton(centralwidget);
        plussa->setObjectName("plussa");
        plussa->setGeometry(QRect(350, 70, 83, 29));
        Numero1text = new QLabel(centralwidget);
        Numero1text->setObjectName("Numero1text");
        Numero1text->setGeometry(QRect(50, 0, 63, 20));
        Numero2text = new QLabel(centralwidget);
        Numero2text->setObjectName("Numero2text");
        Numero2text->setGeometry(QRect(190, 0, 71, 20));
        Tulostext = new QLabel(centralwidget);
        Tulostext->setObjectName("Tulostext");
        Tulostext->setGeometry(QRect(340, 0, 63, 20));
        num0 = new QPushButton(centralwidget);
        num0->setObjectName("num0");
        num0->setGeometry(QRect(50, 190, 83, 29));
        clear = new QPushButton(centralwidget);
        clear->setObjectName("clear");
        clear->setGeometry(QRect(150, 190, 83, 29));
        enter = new QPushButton(centralwidget);
        enter->setObjectName("enter");
        enter->setGeometry(QRect(250, 190, 83, 29));
        miinus = new QPushButton(centralwidget);
        miinus->setObjectName("miinus");
        miinus->setGeometry(QRect(350, 110, 83, 29));
        kerto = new QPushButton(centralwidget);
        kerto->setObjectName("kerto");
        kerto->setGeometry(QRect(350, 150, 83, 29));
        jako = new QPushButton(centralwidget);
        jako->setObjectName("jako");
        jako->setGeometry(QRect(350, 190, 83, 29));
        MainWindow->setCentralWidget(centralwidget);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        num1->setText(QCoreApplication::translate("MainWindow", "1", nullptr));
        num2->setText(QCoreApplication::translate("MainWindow", "2", nullptr));
        num3->setText(QCoreApplication::translate("MainWindow", "3", nullptr));
        num4->setText(QCoreApplication::translate("MainWindow", "4", nullptr));
        num5->setText(QCoreApplication::translate("MainWindow", "5", nullptr));
        num6->setText(QCoreApplication::translate("MainWindow", "6", nullptr));
        num7->setText(QCoreApplication::translate("MainWindow", "7", nullptr));
        num8->setText(QCoreApplication::translate("MainWindow", "8", nullptr));
        num9->setText(QCoreApplication::translate("MainWindow", "9", nullptr));
        plussa->setText(QCoreApplication::translate("MainWindow", "+", nullptr));
        Numero1text->setText(QCoreApplication::translate("MainWindow", "Numero 1", nullptr));
        Numero2text->setText(QCoreApplication::translate("MainWindow", "Numero 2", nullptr));
        Tulostext->setText(QCoreApplication::translate("MainWindow", "Tulos", nullptr));
        num0->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        clear->setText(QCoreApplication::translate("MainWindow", "clear", nullptr));
        enter->setText(QCoreApplication::translate("MainWindow", "enter", nullptr));
        miinus->setText(QCoreApplication::translate("MainWindow", "-", nullptr));
        kerto->setText(QCoreApplication::translate("MainWindow", "*", nullptr));
        jako->setText(QCoreApplication::translate("MainWindow", "/", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
