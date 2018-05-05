#include <iostream>
#include <string>
#include <sstream>

using namespace std;

class Gameboard{
    char gameSpace[4][4];
    string name[2];
    
    public:
    Gameboard();
    void setName(char s,string nameIn);
    void setGameSpace(char s,int row,int column);
    string getName(char s);
    int isWinner(char s);
    void printInfo();
};

Gameboard::Gameboard()
{
    name[0]="Unkown";
    name[1]="Unkown";
    for (int i=0;i<4;i++)
    {
        for(int j=0;i<4;i++)
        {
            gameSpace[i][j]='-';
        }
    }
}

void Gameboard::setName(char s,string nameIn)
{
    if (s=='x'){
        name[0] = nameIn;
    }
    else if (s == 'o'){
        name[1] = nameIn;
    }
}


string Gameboard::getName(char s)
{
    if (s=='x'){
        return name[0];
    }
    else if (s == 'o'){
        return name[1];
    }
}


void Gameboard::setGameSpace(char s,int row,int column)
{
    gameSpace[row][column]=s;
}

int Gameboard::isWinner(char s)
{
    int aux;
    //Verify rows
    for (int i=0; i<4;i++)
    {
        for (int j=0; j<4; j++)
        {
          if(gameSpace[i][j]==s){
              aux=1;
          } 
          else
            aux = 0;
        }
        if (aux==1){
            return 1;
        }
    }
    //Verify columns
    for (int i=0; i<4;i++)
    {
        for (int j=0; j<4; j++)
        {
          if(gameSpace[j][i]==s){
              aux=1;
          } 
          else
            aux = 0;
        }
        if (aux==1){
            return 1;
        }
    }
    //Verify diagonals
    for (int i=0;i<4;i++){
        if(gameSpace[i][i]==s){
            aux =1;
        }
        else
            aux=0;
    }
    if(aux==1){
        return 1;
    }
    return 0;
    
}

void Gameboard::printInfo()
{
    cout<<name[0]<<" "<<name[1]<<"\n";
    for (int i=0;i<4;i++)
    {
        for(int j=0;j<4;j++)
        {
         cout<<gameSpace[i][j]<<" ";   
        }
        cout<<"\n";
    }
}