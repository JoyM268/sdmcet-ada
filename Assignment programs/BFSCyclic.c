//Program to check if graph is cyclic or not using bfs
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

int bfs(int v, int graph[][MAX], int visitedNodes[], int nodeCount)
{
insertQueue(v);
while (front <= rear)
{
    int frontElement = queue[front], w;
    deleteQueue();
    if (visitedNodes[frontElement] != 0 || graph[frontElement][frontElement] == 1)
    {
        return 1;
    }
    count++;
    visitedNodes[frontElement] = count;
    for (w = 0; w < nodeCount; w++)
    {
        if (graph[frontElement][w] == 1 && visitedNodes[w] == 0)
        {
            insertQueue(w);
        }
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
        if(bfs(v, graph, visitedNodes, nodeCount) == 1){
            return 1;
        }
    }
}
return 0;
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