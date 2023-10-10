#include <stdio.h>
#define N 5
int queue[N];
int front = -1;
int rear = -1;
void enqueue(int x)
{
    if (front == -1 && rear == -1)
    {
        front = rear = 0;
        queue[rear] = x;
    }
    else if ((rear + 1) % N == front)
    {
        printf("overflow\n");
    }
    else
    {
        rear = (rear + 1) % N;
        queue[rear] = x;
    }
}
void dequeue()
{
    if (front == -1 && rear == -1)
    {
        printf("underflow\n");
    }
    else if (rear == front)
    {
        front = rear = -1;
    }
    else
    {
        printf("%d\n", queue[front]);
        front = (front + 1) % N;
    }
}
void display()
{
    int i = front;
    if (front == -1 && rear == -1)
    {
        printf("overflow\n");
    }
    else
    {
        printf("queue is:\n");
        while (i != rear)
        {
            printf("%d\n", queue[i]);
            i = (i + 1) % N;
        }
        printf("%d\n", queue[rear]);
    }
}
void peak()
{
    printf("%d\n", queue[front]);
}
void main()
{
    enqueue(5);
    enqueue(2);
    enqueue(9);
    enqueue(18);
    enqueue(25);
    enqueue(3);
    display();
    dequeue();
    dequeue();
    dequeue();
    dequeue();
    enqueue(10);
    enqueue(24);
    enqueue(65);
    display();
}