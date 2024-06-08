//Implement BFS algorithm on a graph represented as Adjacency matrix
#include<stdio.h>
#define MAX 100

int count = 0, queue[MAX], front = 0, rear = -1;
void insertQueue(int element)
{
    queue[++rear] = element;
}

void deleteQueue()
{
    queue[front++];
    if(front > rear)
    {
        front = 0;
        rear = -1;
    }
}

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

void markUnvisited(int visitedNodes[], int nodeCount)
{
    int i;
    for(i = 0; i < nodeCount; i++)
    {
        visitedNodes[i] = 0;
    }
}

void bfs(int v, int graph[][MAX], int visitedNodes[], int nodeCount)
{
    count++;
    visitedNodes[v] = count;
    insertQueue(v);
    while(front <= rear)
    {
        int frontElement = queue[front], w;
        printf("%d ", frontElement);
        for(w = 0; w < nodeCount; w++)
        {
            if(graph[frontElement][w] == 1 && visitedNodes[w] == 0)
            {
                count++;
                visitedNodes[w] = count;
                insertQueue(w);
            }
        }
        deleteQueue();
    }
}

void BFS(int graph[][MAX], int visitedNodes[], int nodeCount)
{
    int v;
    for(v = 0; v < nodeCount; v++)
    {
        if(visitedNodes[v] == 0)
        {
            bfs(v, graph, visitedNodes, nodeCount);
        }
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
    BFS(graph, visitedNodes, nodeCount);
    printf("\n");
    return 0;
}