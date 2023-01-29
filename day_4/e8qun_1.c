#define N 8
#include <stdbool.h>
#include <stdio.h>

int count=0;

int printSolution(int board[N][N])
{
    for (int i = 0; i < N; i++) {
        count++;
        for (int j = 0; j < N; j++){
            count++;
            printf(" %d ", board[i][j]);
        }count++;
            
        printf("\n");
    }count++;
    return count;
}
 
bool isSafe(int board[N][N], int row, int col)
{
    int i, j;
 
 
    for (i = 0; i < col; i++){
        count++;
        if (board[row][i]){
            count++;
            return false;
        }
            
    }count++;
        
 

    for (i = row, j = col; i >= 0 && j >= 0; i--, j--){
        count++;
        if (board[i][j]){
            count++;
            return false;
        }
            
    }count++;

 
    
    for (i = row, j = col; j >= 0 && i < N; i++, j--){
        count++;
        if (board[i][j]){
            count++;
            return false;
        }
            
    }count++;
    
    return true;
}
 

bool solveNQUtil(int board[N][N], int col)
{

    if (col >= N){
        count++;
        return true;
    }
        
 

    for (int i = 0; i < N; i++) {
        count++;
        if (isSafe(board, i, col)) {
            count++;

            board[i][col] = 1;
            count++;
            
            if (solveNQUtil(board, col + 1)){
                count++;
                return true;
            }
 
            board[i][col] = 0; 
            count++;
        }
    }

    return false;
}
 

bool solveNQ()
{
    int board[N][N] = { { 0, 0, 0, 0 },
                        { 0, 0, 0, 0 },
                        { 0, 0, 0, 0 },
                        { 0, 0, 0, 0 } };
   
 
    if (solveNQUtil(board, 0) == false) {
        printf("Solution does not exist");
        return false;
    }
    printSolution(board);
    return true;
}

int main()
{
    solveNQ();
    printf("time complexity: %d",count);
    return 0;
}
