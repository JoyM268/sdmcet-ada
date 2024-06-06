//Implementaion of warshall's algorithm
#include<stdio.h>
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

void warshall(int adjMatrix[][COL], int transitive[][COL], int n)
{
    copyMatrix(adjMatrix, transitive, n);
    int k, i, j;
    for(k = 0; k < n; k++)
    {
        for(i = 0; i < n; i++)
        {
            for(j = 0; j < n; j++)
            {
                transitive[i][j] = transitive[i][j] || (transitive[i][k] && transitive[k][j]);
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
    int n, adjMatrix[ROW][COL], transitive[ROW][COL];
    printf("Enter the number of vertices: ");
    scanf("%d", &n);
    printf("Enter the elements of adjacency matrix:\n");
    readMatrix(adjMatrix, n);
    warshall(adjMatrix, transitive, n);
    printf("The transitive closure is:\n");
    printMatrix(transitive, n);
    return 0;
}