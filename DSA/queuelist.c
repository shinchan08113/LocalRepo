#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
};
struct node *front;
struct node *rear;
void enqueue(int x)
{
    struct node *newnode;
    newnode = (struct node *)malloc(sizeof(struct node));
    newnode->data = x;
    newnode->next = 0;
    if (front == 0 && rear == 0)
    {
        front = rear = newnode;
    }
    else
    {
        rear->next = newnode;
        rear = newnode;
    }
}
void display()
{
    struct node *temp;
    if (front == 0 && rear == 0)
    {
        printf("underflow\n");
    }
    else
    {
        temp = front;
        while (temp != 0)
        {
            printf("%d\n", temp->data);
            temp = temp->next;
        }
    }
}
void dequeue()
{
    struct node *temp;
    temp = front;
    if (front == 0 && rear == 0)
    {
        printf("underflow\n");
    }
    else
    {
        front = front->next;
        free(temp);
    }
}
void peak()
{
    if (front == 0 && rear == 0)
    {
        printf("underflow\n");
    }
    else
    {
        printf("%d\n", front->data);
    }
}
void main()
{
    enqueue(5);
    enqueue(20);
    enqueue(2);
    display();
    dequeue();
    peak();
}