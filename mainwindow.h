#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "chessinsert.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    chessInsert chess;
    Values value;

private slots:
    void on_Choice_activated(int index);

    void on_Start_clicked();

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
