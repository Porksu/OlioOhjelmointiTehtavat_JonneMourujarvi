#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    setActiveControls();
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_plussa_clicked()
{
    if (tila == 3){
    QString numero1Str = ui->numero1->text();
    int numero1 = numero1Str.toInt();

    QString numero2Str = ui->numero2->text();
    int numero2 = numero2Str.toInt();

    int result = numero1 + numero2;

    QString tulosStr = QString::number(result);
    ui->tulos->setText(tulosStr);
    tila = 1;
    setActiveControls();
    }
}


void MainWindow::on_miinus_clicked()
{
    if (tila == 3){
        QString numero1Str = ui->numero1->text();
        int numero1 = numero1Str.toInt();

        QString numero2Str = ui->numero2->text();
        int numero2 = numero2Str.toInt();

        int result = numero1 - numero2;

        QString tulosStr = QString::number(result);
        ui->tulos->setText(tulosStr);
        tila = 1;
        setActiveControls();
    }
}


void MainWindow::on_kerto_clicked()
{
    if (tila == 3){
        QString numero1Str = ui->numero1->text();
        int numero1 = numero1Str.toInt();

        QString numero2Str = ui->numero2->text();
        int numero2 = numero2Str.toInt();

        int result = numero1 * numero2;

        QString tulosStr = QString::number(result);
        ui->tulos->setText(tulosStr);
        tila = 1;
        setActiveControls();
    }
}


void MainWindow::on_jako_clicked()
{
    if (tila == 3){
        QString numero1Str = ui->numero1->text();
        int numero1 = numero1Str.toInt();

        QString numero2Str = ui->numero2->text();
        int numero2 = numero2Str.toInt();

        int result = numero1 / numero2;

        QString tulosStr = QString::number(result);
        ui->tulos->setText(tulosStr);
        tila = 1;
        setActiveControls();
    }
}


void MainWindow::on_num1_clicked()
{
    QString str = ui->num1->text();
    int n = str.toInt();
    numberClickHandler(n);
}


void MainWindow::on_num2_clicked()
{
    QString str = ui->num2->text();
    int n = str.toInt();
    numberClickHandler(n);
}


void MainWindow::on_num3_clicked()
{
    QString str = ui->num3->text();
    int n = str.toInt();
    numberClickHandler(n);
}

void MainWindow::numberClickHandler(int n)
{
    QString str = QString::number(n);
    if (tila == 1){
        ui->numero1->setText(str);
    }
    else if (tila == 2){
        ui->numero2->setText(str);
    }
}

void MainWindow::setActiveControls()
{
    if (tila == 1){
        ui->numero1->setEnabled(true);
        ui->numero2->setEnabled(false);
        ui->tulos->setEnabled(false);
        ui->plussa->setEnabled(false);
        ui->miinus->setEnabled(false);
        ui->kerto->setEnabled(false);
        ui->jako->setEnabled(false);
    } else if (tila == 2){
        ui->numero1->setEnabled(false);
        ui->numero2->setEnabled(true);
        ui->tulos->setEnabled(false);
        ui->plussa->setEnabled(false);
        ui->miinus->setEnabled(false);
        ui->kerto->setEnabled(false);
        ui->jako->setEnabled(false);
    }else if (tila == 3){
        ui->numero1->setEnabled(false);
        ui->numero2->setEnabled(false);
        ui->tulos->setEnabled(true);
        ui->plussa->setEnabled(true);
        ui->miinus->setEnabled(true);
        ui->kerto->setEnabled(true);
        ui->jako->setEnabled(true);
    }
}


void MainWindow::on_enter_clicked()
{

    if(tila == 1){
        tila = 2;
    }
    else if (tila == 2)
    {
        tila = 3;
    }
    else {
        tila = 1;
    }
    setActiveControls();
}


void MainWindow::on_num4_clicked()
{
    QString str = ui->num4->text();
    int n = str.toInt();
    numberClickHandler(n);
}


void MainWindow::on_num5_clicked()
{
    QString str = ui->num5->text();
    int n = str.toInt();
    numberClickHandler(n);
}


void MainWindow::on_num6_clicked()
{
    QString str = ui->num6->text();
    int n = str.toInt();
    numberClickHandler(n);
}


void MainWindow::on_num7_clicked()
{
    QString str = ui->num7->text();
    int n = str.toInt();
    numberClickHandler(n);
}


void MainWindow::on_num8_clicked()
{
    QString str = ui->num8->text();
    int n = str.toInt();
    numberClickHandler(n);
}


void MainWindow::on_num9_clicked()
{
    QString str = ui->num9->text();
    int n = str.toInt();
    numberClickHandler(n);
}


void MainWindow::on_num0_clicked()
{
    QString str = ui->num0->text();
    int n = str.toInt();
    numberClickHandler(n);
}


void MainWindow::on_clear_clicked()
{
    ui->numero1->clear();
    ui->numero2->clear();
    ui->tulos->clear();
    tila = 1;
    setActiveControls();
}

