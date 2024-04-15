//Implement DFS algorithm on a graph represented as Adjacency matrix
#include<stdio.h>
#include<stdio.h>
#define MAX 100

int count = 0;
void readMatrix(int matrix[][MAX], int n)
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

void dfs(int v, int graph[][MAX], int visitedNodes[], int nodeCount)
{
    count++;
    visitedNodes[v] = count;
    printf("%d ", v);
    int i;
    for(int w = 0; w < nodeCount; w++)
    {
        if(graph[v][w] != 0 && visitedNodes[w] == 0)
        {  
            dfs(w, graph, visitedNodes, nodeCount);
        }
    }
}

void DFS(int graph[][MAX], int visitedNodes[], int nodeCount)
{
    int i;
    for(i = 0; i < nodeCount; i++)
    {
        if(visitedNodes[i] == 0)
        {
            dfs(i, graph, visitedNodes, nodeCount);
        }
    }
}

void markUnvisited(int visitedNodes[], int nodeCount)
{
    int i;
    for(i = 0; i < nodeCount; i++)
    {
        visitedNodes[i] = 0;
    }
}

int main()
{
    int nodeCount, graph[MAX][MAX], visitedNodes[MAX];
    printf("Enter the number of nodes: ");
    scanf("%d", &nodeCount);
    printf("Enter the adjacency matrix:\n");
    readMatrix(graph, nodeCount);
    markUnvisited(visitedNodes, nodeCount);
    printf("The order in which the nodes are visited is:\n");
    DFS(graph, visitedNodes, nodeCount);
    printf("\n");
    return 0;
}