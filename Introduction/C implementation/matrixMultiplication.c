//Program to multiply two matrix
#include<stdio.h>
#define ROWS1 3
#define COLS1 3
#define ROWS2 3
#define COLS2 3

void multiplyMatrix(int matrix1[ROWS1][COLS1], int matrix2[ROWS2][COLS2], int result[ROWS1][COLS2]);
int main() 
{
    int matrix1[ROWS1][COLS1] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int matrix2[ROWS2][COLS2] = {{1, 1, 1}, {2, 2, 2}, {3, 3, 3}};
    int result[ROWS1][COLS2];
    multiplyMatrix(matrix1, matrix2, result);
    printf("Result:\n");
    for (int i = 0; i < ROWS1; i++) 
    {
        for (int j = 0; j < COLS2; j++) 
        {
            printf("%d ", result[i][j]);
        }
        printf("\n");
    }
    return 0;
}

void multiplyMatrix(int matrix1[ROWS1][COLS1], int matrix2[ROWS2][COLS2], int result[ROWS1][COLS2]) 
{
    for (int i = 0; i < ROWS1; i++) 
    {
        for (int j = 0; j < COLS2; j++) 
        {
            result[i][j] = 0;
            for (int k = 0; k < COLS1; k++) 
            {
                result[i][j] += matrix1[i][k] * matrix2[k][j];
            }
        }
    }
}