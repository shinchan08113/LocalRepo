#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
void push();
void pop();
void peak();
void display();
struct node
{
    int data;
    struct node *next;
};
struct node *head;
void main()
{
    int choice = 0;
    while (choice != 5)
    {
        printf("choose one of the following list\n");
        printf("1.push\n 2.pop\n 3.peak\n 4.display\n 5.exit\n ");
        printf("Enter your choice\n");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
        {
            push();
            break;
        }
        case 2:
        {
            pop();
            break;
        }
        case 3:
        {
            peak();
            break;
        }
        case 4:
        {
            display();
            break;
        }
        case 5:
        {
            printf("Exit.....\n");
            break;
        }
        default:
        {
            printf("Please enter valid operation\n");
        }
        }
    }
}
void push()
{
    int val;
    struct node *ptr;
    ptr = (struct node *)malloc(sizeof(struct node));
    if (ptr == NULL)
    {
        printf("underflow\n");
    }
    else
    {
        printf("Enter the value \n");
        scanf("%d", &val);
        if (head == NULL)
        {
            ptr->data = val;
            ptr->next = NULL;
            head = ptr;
        }
        else
        {
            ptr->data = val;
            ptr->next = head;
            head = ptr;
        }
        printf("Item pushed\n");
    }
}
void pop()
{
    int item;
    struct node *ptr;
    if (head = NULL)
    {
        printf("Underflow\n");
    }
    else
    {
        item = head->data;
        ptr = head;
        head = head->next;
        free(ptr);
        printf("Item pushed\n");
    }
}
void peak()
{
    if (head == NULL)
    {
        printf("underflow\n");
    }
    else
    {
        printf("Top element is %d", head->data);
    }
}
void display()
{
    int i;
    struct node *ptr;
    ptr = head;
    if (ptr == NULL)
    {
        printf("Stack is empty\n");
    }
    else
    {
        printf("printing value of stack\n");
        while (ptr != NULL)
        {
            printf("%d", ptr->data);
            ptr = ptr->next;
        }
    }
}
