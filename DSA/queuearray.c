#include <stdio.h>
#define N 5

int queue[5];
int front = -1;
int rear = -1;
void enqueue(int x)
{

    if (rear == N - 1)
    {
        printf("overflow\n");
    }
    else if (front == -1 && rear == -1)
    {
        front = rear = 0;
        queue[rear] = x;
    }
    else
    {
        rear++;
        queue[rear] = x;
    }
}
void dequeue()
{
    if (front == -1 && rear == -1)
    {
        printf("underflow\n");
    }
    else if (front == rear)
    {
        front = rear = -1;
    }
    else
    {
        printf("%d\n", queue[front]);
        front++;
    }
}
void display()
{
    if (front == -1 && rear == -1)
    {
        printf("underflow\n");
    }
    else
    {
        for (int i = front; i < rear + 1; i++)
        {
            printf("%d\n", queue[i]);
        }
    }
}
void peak()
{
    if (front == -1 && rear == -1)
    {
        printf("underflow\n");
    }
    else
    {
        printf("%d\n", queue[front]);
    }
}
void main()
{

    enqueue(2);
    enqueue(5);
    enqueue(-1);
    display();
    peak();
    dequeue();
    peak();
    display();
}