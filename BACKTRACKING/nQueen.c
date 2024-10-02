#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
int n=4; // board size nxn

void displayBoard(char board[][n], int size){
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            printf("%c ", board[i][j]);
        }
        printf("\n");
        
    }
}

void initialize(char board[][n], int size){
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            board[i][j] = 'X';
        }
    }
}
int isSafe(char board[][n], int size, int row, int col){
    // vertical up
    for(int i=row-1; i >= 0; i--){
            if(board[i][col] == 'Q'){
                return 0;
            }
    }

    // diagonal left up
    for (int i = row-1, j=col-1; i>=0 && j>=0; i--,j--)
    {
        if(board[i][j] == 'Q'){
            return 0;
        }
    }
    

    // diagonal right up
    for (int i = row-1, j = col+1; i>=0 && j<size; i--,j++) {
            if(board[i][j] == 'Q'){
                return 0;
            }
        }
    return 1;
}
void nQueens(char board[][n], int size , int row){
    if(row == size){
        printf("---Chess Board---\n");
        displayBoard(board,size);
        return;
    }
    for (int col = 0; col < size; col++)
    {   
        if(isSafe(board,size, 0,0)){
        board[row][col] = 'Q';
        nQueens(board, size, row+1); // function call 
        board[row][col] = 'X';
        }
    }
    
}
int main(int argc, char *argv[]){
    
    char board[n][n];
    initialize(board, n);
    // displayBoard(board,n);
    nQueens(board, n, 0);

    return 0;
}