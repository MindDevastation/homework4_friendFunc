#ifndef CHESSINSERT_H
#define CHESSINSERT_H

#include <iostream>
#include <QString>
#include <QStringList>
#include <QTableWidgetItem>

class Values;

class chessInsert
{
public:
    chessInsert();
    int index = 0;

    void insertValue(Values &value);
};

class Values
{

public:
    QStringList insert_col;
    QStringList insert_row;
    QTableWidgetItem *pawn_up = new QTableWidgetItem ("");
    QTableWidgetItem *king_up = new QTableWidgetItem ("");
    QTableWidgetItem *queen_up = new QTableWidgetItem ("");
    QTableWidgetItem *rock_up = new QTableWidgetItem ("");
    QTableWidgetItem *knight_up = new QTableWidgetItem ("");
    QTableWidgetItem *bishop_up = new QTableWidgetItem ("");
    QTableWidgetItem *pawn_bottom = new QTableWidgetItem ("");
    QTableWidgetItem *king_bottom = new QTableWidgetItem ("");
    QTableWidgetItem *queen_bottom = new QTableWidgetItem ("");
    QTableWidgetItem *rock_bottom = new QTableWidgetItem ("");
    QTableWidgetItem *knight_bottom = new QTableWidgetItem ("");
    QTableWidgetItem *bishop_bottom = new QTableWidgetItem ("");

    friend void chessInsert::insertValue(Values &value);

};





#endif // CHESSINSERT_H
