#include <iostream>
#include <string>
#include <sstream>
#include <fstream>

using namespace std;

void xPos(Gameboard board,int row, int column);
void xPos(Gameboard board,int row, int column);
string winner(Gameboard board);

void xPos(Gameboard board,int row, int column)
{
    board.setGameSpace('x',row,column);
}

void oPos(Gameboard board,int row, int column)
{
    board.setGameSpace('o',row,column);
}

string winner(Gameboard board){
    if(board.isWinner('x')==1){
        return "X is the winner";
    }
    else if(board.isWinner('o')==1){
        return "O is the winner";
    }
    else{
        return "Tie";
    }
}