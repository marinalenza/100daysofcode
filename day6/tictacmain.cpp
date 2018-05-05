
#include "mainClasses.cpp"
#include "mainFunctions.cpp"

int main()
{
    Gameboard board;
    string nameIn;
    int i=0,row,column;
    cin>>nameIn;
    board.setName('x',nameIn);
    cin>>nameIn;
    board.setName('o',nameIn);
    //set Positions
    board.printInfo();
    while(i<4){
        cout<<board.getName('x')<<",where would you like to put the 'x'? \n";
        cin>>row;
        cin>>column;
        xPos(board,row,column);
        board.printInfo();
        cout<<board.getName('o')<<",where would you like to put the 'o'? \n";
        cin>>row;
        cin>>column;
        oPos(board,row,column);
        board.printInfo();
    }
    //winner
    board.printInfo();
    cout<<winner(board);
    return 0;
}