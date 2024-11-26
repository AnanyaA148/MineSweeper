#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    // choose difficulty
    int numrows =8;
    int numcols = 10;
    int board[numrows][numcols];

    //place mines
    int mines =10
    int currMines =0;
    while(currMines < mines){
        row = rand() % (numrows);
        col = rand() % numcols;
        if board[row][col] != -1{
            board[row][col] = -1;
            currMines++;
        }

    }

    //place numbers
    int numMines;
    for(int i =0; i<numrows; i++){
        for(int j=0; j< numrows; j++){
            numMines =0
            if(board[i][j] == -1){
                continue;
            }else{
                if board[i][j]
            }
        }
    }



}
