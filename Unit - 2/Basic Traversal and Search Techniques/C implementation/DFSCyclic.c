//Program to check if graph is cyclic or not using dfs
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

int dfs(int v, int graph[][MAX], int visitedNodes[], int nodeCount, int parent)
{
    count++;
    visitedNodes[v] = count;
    int i;
    for(int w = 0; w < nodeCount; w++)
    {
        if(graph[v][w] != 0 && visitedNodes[w] == 0)
        {  
            if(dfs(w, graph, visitedNodes, nodeCount, v) == 1)
            {
                return 1;
            }
        }
        else if(graph[v][w] != 0 && visitedNodes[w] != 0 && w != parent)
        {
            return 1;
        }
    }
    return 0;
}

int isCyclic(int graph[][MAX], int visitedNodes[], int nodeCount)
{
    int v;
    for(v = 0; v < nodeCount; v++)
    {
        if(visitedNodes[v] == 0)
        {
            if(dfs(v, graph, visitedNodes, nodeCount, -1) == 1){
                return 1;
            }
        }
    }
    return 0;
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
    if(isCyclic(graph, visitedNodes, nodeCount))
    {
        printf("The graph is cyclic\n");
    }
    else
    {
        printf("The graph is acyclic\n");
    }
    return 0;
}