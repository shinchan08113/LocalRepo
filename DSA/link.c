#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
} * start;
void createemptylist(struct node *start)
{
    start = NULL;
}
void traverse(struct node *start)
{
    struct node *p;
    p = start;
    while (p != NULL)
    {
        printf("%d", p->data);
        p = p->next;
    }
    printf("\n");
}
void insertATbegin(int item)
{
    struct node *p;
    p = (struct node *)malloc(sizeof(struct node));
    p->data = item;
    if (start == NULL)
    {
        p->next = NULL;
    }
    else
    {
        p->next = start;
    }
    start = p;
}
void insertATend(int item)
{
    struct node *p;
    struct node *pos;
    p = (struct node *)malloc(sizeof(struct node));
    p->data = item;
    p->next = NULL;
    if (start == NULL)
    {
        start = p;
    }
    else
    {
        pos = start;
        while (pos->next != NULL)
        {
            pos = pos->next;
        }
        pos->next = p;
    }
}
void insertATpostion(int item, int loc)
{
    struct node *p;
    struct node *temp;
    int i;
    for (i = 0, temp = start; i < loc; i++)
    {
        temp = temp->next;
        if (temp == NULL)
        {
            printf("list is empty\n");
        }
        else
        {
            p = (struct node *)malloc(sizeof(struct node));
            p->data = item;
            p->next = temp->next;
            temp->next = p;
        }
    }
}
void deleteATbegin()
{
    struct node *p;
    if (start == NULL)
    {
        printf("yor list is empty\n");
    }
    else
    {
        p = start;
        start = start->next;
        printf("deleted no. is %d", p->data);
        free(p);
    }
}
void deleteATend()
{
    struct node *p;
    struct node *loc;
    if (start == NULL)
    {
        printf("list is empty\n");
    }
    else if (start->next = NULL)

    {
        p = start;
        start = NULL;
        printf("deleted item is %d", p->data);
        free(p);
    }
    else
    {
        loc = start;
        p = start->next;
        while (p->next != NULL)
        {
            p = p->next;
            loc = loc->next;
        }
        loc->next = NULL;
        printf("deeted lement is %d", p->data);
        free(p);
    }
}
void deleteATpos()
{
    struct node *p;
    struct node *temp;
    int i, loc;
    printf("enter the position to delete:");
    scanf("%d", &loc);
    if (start == NULL)
    {
        printf("empty list\n");
    }
    else
    {
        p = start;
        for (i = 0; i < loc; i++)
        {
            temp = p;
            p = p->next;
        }
        printf("deleted no. is %d", p->data);
        temp->next = p->next;
        free(p);
    }
}
int main()
{
    int ch;
    int item, I;
    printf("01.Create empty list\n02.Insert at begin\n03.Insert at end\n03.Insert at pos\n04.Display linked list\n06.Delete at begin\n07.Delete at end\n08.Delete at pos\n09.Exit");
    while (1)
    {
        printf("ENTER Choice\n");
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:
            createemptylist(start);
            break;
        case 2:
            printf("Enter the value you want to insert at begin\n");
            scanf("%d", &item);
            insertATbegin(item);
            break;
        case 3:
            printf("enter the value\n");
            scanf("%d", &item);
            insertATend(item);
            break;
        case 4:
            printf("enter the value\n");
            scanf("%d", &item);
            printf("enter the location at which you want to insert\n");
            scanf("%d", &I);
            insertATpostion(item, I);
            break;
        case 5:
            traverse(start);
            break;
        case 6:
            deleteATbegin();
            break;
        case 7:
            deleteATend();
            break;
        case 8:
            deleteATpos();
            break;
        case 9:
            exit(0);

            break;
        default:
            printf("invalid input");
        }
    }
}