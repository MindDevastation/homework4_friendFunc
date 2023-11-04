#include "chessinsert.h"

chessInsert::chessInsert()
{

}

void chessInsert::insertValue(Values &value){
    if(index == 1){
        value.insert_col = {"A", "B", "C", "D", "E", "F", "G", "E"};
        value.insert_row = {"1", "2", "3", "4", "5", "6", "7" , "8"};

        value.pawn_up = new QTableWidgetItem (QIcon(":/img/pawn_w.png"), "pawn_w", 3);
        value.king_up = new QTableWidgetItem (QIcon(":/img/king_w.png"), "king_w", 1);
        value.queen_up = new QTableWidgetItem (QIcon(":/img/qween_w.png"), "qween_w", 1);
        value.rock_up = new QTableWidgetItem (QIcon(":/img/rock_w.png"), "rock_w", 1);
        value.knight_up = new QTableWidgetItem (QIcon(":/img/knight_w.png"), "knight_w", 1);
        value.bishop_up = new QTableWidgetItem (QIcon(":/img/bishop_w.png"), "bishop_w", 1);
        value.pawn_bottom = new QTableWidgetItem (QIcon(":/img/pawn_b.png"), "pawn_b", 1);
        value.king_bottom = new QTableWidgetItem (QIcon(":/img/king_b.png"), "king_b", 1);
        value.queen_bottom = new QTableWidgetItem (QIcon(":/img/qween_b.png"), "qween_b", 1);
        value.rock_bottom = new QTableWidgetItem (QIcon(":/img/rock_b.png"), "rock_b", 1);
        value.knight_bottom = new QTableWidgetItem (QIcon(":/img/knight_b.png"), "knight_b", 1);
        value.bishop_bottom = new QTableWidgetItem (QIcon(":/img/bishop_b.png"), "bishop_b", 1);
    }
    else if (index == 2){
        value.insert_col = {"E", "G", "F", "E", "D", "C", "B", "A"};
        value.insert_row = {"8", "7", "6", "5", "4", "3", "2", "1"};
        value.pawn_bottom = new QTableWidgetItem (QIcon(":/img/pawn_w.png"), "pawn_w", 1);
        value.king_bottom = new QTableWidgetItem (QIcon(":/img/king_w.png"), "king_w", 1);
        value.queen_bottom = new QTableWidgetItem (QIcon(":/img/qween_w.png"), "qween_w", 1);
        value.rock_bottom = new QTableWidgetItem (QIcon(":/img/rock_w.png"), "rock_w", 1);
        value.knight_bottom = new QTableWidgetItem (QIcon(":/img/knight_w.png"), "knight_w", 1);
        value.bishop_bottom = new QTableWidgetItem (QIcon(":/img/bishop_w.png"), "bishop_w", 1);
        value.pawn_up = new QTableWidgetItem (QIcon(":/img/pawn_b.png"), "pawn_b", 1);
        value.king_up = new QTableWidgetItem (QIcon(":/img/king_b.png"), "king_b", 1);
        value.queen_up = new QTableWidgetItem (QIcon(":/img/qween_b.png"), "qween_b", 1);
        value.rock_up = new QTableWidgetItem (QIcon(":/img/rock_b.png"), "rock_b", 1);
        value.knight_up = new QTableWidgetItem (QIcon(":/img/knight_b.png"), "knight_b", 1);
        value.bishop_up = new QTableWidgetItem (QIcon(":/img/bishop_b.png"), "bishop_b", 1);
    }
}
