#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->Gamelabel->setText("Select mode: 120 s or 5 min");
}

MainWindow::~MainWindow()
{
    if(timer){
        timer->stop();
        delete timer;
        timer = nullptr;
    }
    delete ui;
}

void MainWindow::stop()
{
    ui->progressBar1->setValue(0);
    ui->progressBar_2->setValue(0);
    ui->Gamelabel->setText("Select mode: 120 s or 5 min");
    timer->stop();
    delete timer;
    timer = nullptr;
    player1 = false;
    player2 = false;
    game = false;
    gameSelected = false;
}

void MainWindow::on_sec_clicked()
{
    if(!game){
        gameSelected = true;
        gameTime = 120;
        player1Time = gameTime;
        player2Time = gameTime;
        ui->progressBar1->setRange(0, gameTime);
        ui->progressBar_2->setRange(0, gameTime);
        ui->progressBar1->setValue(gameTime);
        ui->progressBar_2->setValue(gameTime);
    }
}

void MainWindow::updateProgressBar()
{
    if(player1 && !player2){
        player1Time = player1Time-1;
        ui->progressBar1->setValue(player1Time);
        if(ui->progressBar1->value() == 0){ui->Gamelabel->setText("Player 1 lost by time");}
    }
    if(player2 && !player1){
        player2Time = player2Time-1;
        ui->progressBar_2->setValue(player2Time);
        if(ui->progressBar_2->value() == 0){ui->Gamelabel->setText("Player 2 lost by time");}
    }
    if(!player1 && !player2){
        ui->Gamelabel->setText("Starting player was not selected");
    }
}


void MainWindow::on_min_clicked()
{
    if(!game){
        gameSelected= true;
        gameTime = 300;
        player1Time = gameTime;
        player2Time = gameTime;
        ui->progressBar1->setRange(0, gameTime);
        ui->progressBar_2->setRange(0, gameTime);
        ui->progressBar1->setValue(gameTime);
        ui->progressBar_2->setValue(gameTime);
    }
}


void MainWindow::on_STOPGAME_clicked()
{
    stop();
}


void MainWindow::on_STARTGAME_clicked()
{
    if(!game){
        timer = new QTimer(this);
        connect(timer,
                &QTimer::timeout,
                this,
                &MainWindow::updateProgressBar);

        timer->setInterval(1000);
        timer->start();
        game = true;
    }
}



void MainWindow::on_SwitchPlayer1_clicked()
{
    if(gameSelected){
        player1 = true;
        player2 = false;
        ui->Gamelabel->setText("Player1's turn");
    }
}


void MainWindow::on_SwitchPlayer2_clicked()
{
    if(gameSelected){
        player1 = false;
        player2 = true;
        ui->Gamelabel->setText("Player2's turn");
    }
}

