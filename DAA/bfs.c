#include <stdio.h>
#include <stdbool.h>
#define MAX_SIZE 100

struct Queue
{
    int items[MAX_SIZE];
    int front;
    int rear;
};

struct Graph
{
    int adjMatrix[MAX_SIZE][MAX_SIZE];
    int verticesCount;
};

void enqueue(struct Queue *q, int);
// int dequeue(struct Queue *q);
// bool isEmpty(struct Queue *q);
void BFS(struct Graph *G, int startVertex);

int main()
{
    struct Graph G;
    int startVertex;

    printf("Enter the number of vertices in the graph: ");
    scanf("%d", &G.verticesCount);

    printf("Enter the adjacency matrix of the graph:\n");
    for (int i = 0; i < G.verticesCount; i++)
    {
        for (int j = 0; j < G.verticesCount; j++)
        {
            scanf("%d", &G.adjMatrix[i][j]);
        }
    }

    printf("Enter the starting vertex for BFS: ");
    scanf("%d", &startVertex);

    printf("BFS traversal starting from vertex %d: ", startVertex);
    BFS(&G, startVertex);

    return 0;
}

void enqueue(struct Queue *q, int value)
{
    if (q->rear == MAX_SIZE - 1)
    {
        printf("Queue overflow!\n");
    }
    else
    {
        if (q->front == -1)
        {
            q->front = 0;
        }
        q->rear++;
        q->items[q->rear] = value;
    }
}

/*int dequeue(struct Queue *q)
{
    int item;
    if (isEmpty(q))
    {
        printf("Queue underflow!\n");
        item = -1;
    }
    else
    {
        item = q->items[q->front];
        q->front++;
        if (q->front > q->rear)
        {
            q->front = -1;
            q->rear = -1;
        }
    }
    return item;
} */

/*bool isEmpty(struct Queue *q)
{
    if (q->rear == -1)
    {
        return true;
    }
    else
    {
        return false;
    }
} */

void BFS(struct Graph *G, int startVertex)
{
    struct Queue q;
    bool visited[MAX_SIZE];

    for (int i = 0; i < G->verticesCount; i++)
    {
        visited[i] = false;
    }

    q.front = -1;
    q.rear = -1;

    visited[startVertex] = true;
    enqueue(&q, startVertex);

    while (!isEmpty(&q))
    {

        int currentVertex = dequeue(&q);
        printf("%d ", currentVertex);

        for (int i = 0; i < G->verticesCount; i++)
        {
            if (G->adjMatrix[currentVertex][i] == 1 && !visited[i])
            {
                visited[i] = true;
                enqueue(&q, i);
            }
        }
    }
}
