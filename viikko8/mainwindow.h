#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QTimer>

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    void stop();
    bool player1;
    bool player2;
    bool game = false;
    bool gameSelected = false;

private slots:
    void on_sec_clicked();
    void updateProgressBar();

    void on_min_clicked();

    void on_STOPGAME_clicked();

    void on_STARTGAME_clicked();

    void on_SwitchPlayer1_clicked();

    void on_SwitchPlayer2_clicked();

private:
    Ui::MainWindow *ui;
    short player1Time;
    short player2Time;
    short gameTime = 0;
    QTimer *timer = nullptr;
};
#endif // MAINWINDOW_H
