#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
};
struct node *head;

void beginsert()
{
    struct node *ptr;
    int item;
    ptr = (struct node *)malloc(sizeof(struct node *));
    if (ptr == NULL)
    {
        printf("\nOVERFLOW");
    }
    else
    {
        printf("\nEnter value\n");
        scanf("%d", &item);
        ptr->data = item;
        ptr->next = head;
        head = ptr;
        printf("\nNode inserted");
    }
}
void insertATlocation()
{
    struct node *ptr, *temp;
    int loc, i, data;
    printf("enter data\n");
    scanf("%d", data);
    ptr = (struct node *)malloc(sizeof(struct node));
    if (ptr == NULL)
    {
        printf("overflow\n");
    }
    else if (head->next = NULL)
    {
        printf("enter location\n");
        scanf("%d", &loc);
        if (loc == 1)
        {
            ptr->next = head;
            ptr->data = data;
            head = ptr;
        }
        else
        {
            head->next = ptr;
            ptr->next = NULL;
        }
    }
    else
    {
        printf("enter loc\n");
        scanf("%d", &loc);
        temp = head;
        for (i = 1; i < loc - 1; i++)
        {
            temp = temp->next;
        }
        if (temp->next = NULL)
        {
            temp->next = NULL;
            ptr->next = NULL;
        }
        else
        {
            ptr->next = temp->next;
            temp->next = ptr;
        }
    }
}
void main()
{
    int choice;
    do
    {
        if (head == NULL)
        {
            beginsert();
        }
        else
        {
            insertATlocation();
        }
        printf("press 0 to insert more\n");
        scanf("%d", &choice);
    } while (choice == 0);
}