#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include <QStringList>
#include <QString>
#include <QPixmap>
#include <QImage>
#include <QTableWidgetItem>
#include <QIcon>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->Start->setEnabled(false);

    QPixmap pawn_b (":/img/pawn_b.png");
    QPixmap pawn_w (":/img/pawn_w.png");
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_Choice_activated(int index)
{
    if(ui->Choice->currentIndex() == 0){
        ui->Start->setEnabled(false);
    }else{
        ui->Start->setEnabled(true);
    }
}


void MainWindow::on_Start_clicked()
{
    ui->tableWidget->clear();
    ui->tableWidget->setColumnCount(8);
    ui->tableWidget->setRowCount(8);

    QTableWidgetItem *blank = new QTableWidgetItem("");
    this->chess.index = ui->Choice->currentIndex();
    this->chess.insertValue(this->value);
    int row = 0, col = 0;
        ui->tableWidget->setItem(0, 7, this->value.rock_up);
        this->value.rock_up->setBackground(Qt::lightGray);
        this->chess.insertValue(this->value);
        ui->tableWidget->setItem(0, 0, this->value.rock_up);
        this->chess.insertValue(this->value);
        ui->tableWidget->setItem(0, 6, this->value.knight_up);
        this->chess.insertValue(this->value);
        ui->tableWidget->setItem(0, 1, this->value.knight_up);
        this->value.knight_up->setBackground(Qt::lightGray);
        this->chess.insertValue(this->value);
        ui->tableWidget->setItem(0, 2, this->value.bishop_up);
        this->chess.insertValue(this->value);
        ui->tableWidget->setItem(0, 5, this->value.bishop_up);
        this->value.bishop_up->setBackground(Qt::lightGray);
        this->chess.insertValue(this->value);
        ui->tableWidget->setItem(0, 4, this->value.king_up);
        this->chess.insertValue(this->value);
        ui->tableWidget->setItem(0, 3, this->value.queen_up);
        this->value.queen_up->setBackground(Qt::lightGray);
        do{
            ui->tableWidget->setItem(1, col, this->value.pawn_up);
            if(col % 2 == 0){
                this->value.pawn_up->setBackground(Qt::lightGray);
            }
            col ++;
            this->chess.insertValue(this->value);
        }while (col<8);
        this->chess.insertValue(this->value);


        ui->tableWidget->setItem(7, 0, this->value.rock_bottom);
        this->value.rock_bottom->setBackground(Qt::lightGray);
        this->chess.insertValue(this->value);
        ui->tableWidget->setItem(7, 7, this->value.rock_bottom);
        this->chess.insertValue(this->value);
        ui->tableWidget->setItem(7, 1, this->value.knight_bottom);
        this->chess.insertValue(this->value);
        ui->tableWidget->setItem(7, 6, this->value.knight_bottom);
        this->value.knight_bottom->setBackground(Qt::lightGray);
        this->chess.insertValue(this->value);
        ui->tableWidget->setItem(7, 5, this->value.bishop_bottom);
        this->chess.insertValue(this->value);
        ui->tableWidget->setItem(7, 2, this->value.bishop_bottom);
        this->value.bishop_bottom->setBackground(Qt::lightGray);
        this->chess.insertValue(this->value);
        ui->tableWidget->setItem(7, 3, this->value.king_bottom);
        this->chess.insertValue(this->value);
        ui->tableWidget->setItem(7, 4, this->value.queen_bottom);
        this->value.queen_bottom->setBackground(Qt::lightGray);
        this->chess.insertValue(this->value);
        col = 0;
        do{
            ui->tableWidget->setItem(6, col, this->value.pawn_bottom);
            if(col % 2 != 0){
                this->value.pawn_bottom->setBackground(Qt::lightGray);
            }
            col ++;
            this->chess.insertValue(this->value);
        }while (col<8);

        for (row = 2; row < 6; row ++){
            for(col = 0; col < 8; col++){
                ui->tableWidget->setItem(row, col, blank);
                if(row % 2 != 0){
                    if(col % 2 == 0){
                        blank->setBackground(Qt::lightGray);
                    }
                }else if (row % 2 == 0){
                    if(col % 2 != 0){
                        blank->setBackground(Qt::lightGray);
                    }
                }
                blank = new QTableWidgetItem("");
            }

        }
    col = 0;


    ui->tableWidget->setHorizontalHeaderLabels(this->value.insert_col);
    ui->tableWidget->setVerticalHeaderLabels(this->value.insert_row);

}

