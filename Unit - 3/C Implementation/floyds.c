//Implementaion of floyd's algorithm
#include<stdio.h>
#include<limits.h>
#define ROW 100
#define COL 100

void readMatrix(int matrix[][COL], int n)
{
    int i, j;
    for(i = 0; i < n; i++)
    {
        for(j = 0; j < n; j++)
        {
            scanf("%d", &matrix[i][j]);
            if(matrix[i][j] == -1){
                matrix[i][j] = INT_MAX;
            }
        }
    }
}

void copyMatrix(int matrix1[][COL], int matrix2[][COL], int n)
{
    int i, j;
    for(i = 0; i < n; i++)
    {
        for(j = 0; j < n; j++)
        {
            matrix2[i][j] = matrix1[i][j];
        }
    }
}

int min(int a, int b) {
    return (a < b) ? a : b;
}

void warshall(int weightMatrix[][COL], int distance[][COL], int n)
{
    copyMatrix(weightMatrix, distance, n);
    int k, i, j;
    for(k = 0; k < n; k++)
    {
        for(i = 0; i < n; i++)
        {
            for(j = 0; j < n; j++)
            {
                if(distance[i][k] != INT_MAX && distance[k][j] != INT_MAX)
                {
                    distance[i][j] = min(distance[i][j], (distance[i][k] + distance[k][j]));
                }
            }
        }
    }
}

void printMatrix(int matrix[][COL], int n){
    int i, j;
    for(i = 0; i < n; i++)
    {
        for(j = 0; j < n; j++)
        {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}

int main()
{
    int n, weightMatrix[ROW][COL], distance[ROW][COL];
    printf("Enter the number of vertices: ");
    scanf("%d", &n);
    printf("Enter the elements of weight matrix(Enter -1 for infinity):\n");
    readMatrix(weightMatrix, n);
    warshall(weightMatrix, distance, n);
    printf("The distance matrix is:\n");
    printMatrix(distance, n);
    return 0;
}