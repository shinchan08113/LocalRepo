#include <stdio.h>
#include <stdlib.h>

void insert_beg();
void insert_end();
void insert_specific();
void delete_beg();
void delete_end();
void delete_specific();
void display();

struct node
{  
    int data;
    struct node *next;
};

struct node *head;

int main()
{
    int s;
    do
    {
        int choice;

        printf("Press 1 for insertion at begining : \n");
        printf("Press 2 for insertion at end      : \n");
        printf("Press 3 for insertion at specified : \n");
        printf("Press 4 for deletion at begining       : \n");
        printf("Press 5 for deletion at end : \n");
        printf("Press 6 for deletion at specific position  : \n");
        printf("Press 7 for display the list      : \n");

        printf("Enter your choice : \n");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            insert_beg();
            break;

        case 2:
            insert_end();
            break;

        case 3:
            insert_specific();
            break;

        case 4:
            delete_beg();
            break;

        case 5:
            delete_end();
            break;

        case 6:
            delete_specific();

        case 7:
            display();
            break;

        default:
            printf("\n Wrong choice \n");
        }

        printf("\n\n Press 0 for more operation : \n");
        scanf("%d", &s);
    } while (s == 0);
}

void insert_beg()
{
    int item;
    printf("\n Enter the item you want to insert : \n");
    scanf("%d", &item);
    struct node *ptr = (struct node *)malloc(sizeof(struct node));
    struct node *temp;
    if (ptr == NULL)
        printf("\n Overflow \n");
    else
    {
        ptr->data = item;
        if (head == NULL)
        {
            head = ptr;
            ptr->next = head;
        }
        else
        {
            temp = head;
            while (temp->next != head)
            {
                temp = temp->next;
            }
            temp->next = ptr;
            ptr->next = head;
            head = ptr;
        }
        printf("\n Node inserted \n");
    }
}

void insert_end()
{
    int item;
    printf("\n Enter the item you want to insert : \n");
    scanf("%d", &item);
    struct node *ptr, *temp;
    ptr = (struct node *)malloc(sizeof(struct node));
    ptr->data = item;
    if (ptr == NULL)
        printf("\n Overflow \n");
    else
    {
        temp = head;
        ptr->data = item;
        if (head == NULL)
        {
            head = ptr;
            ptr->next = head;
        }
        else
        {
            temp = head;
            while (temp->next != head)
            {
                temp = temp->next;
            }
            temp->next = ptr;
            ptr->next = head;
        }
        printf("\n Node inserted \n");
    }
}

void insert_specific()
{
    struct node *temp, *ptr;
    int i, loc, item;
    ptr = (struct node *)malloc(sizeof(struct node));
    printf("Enter the location\n");
    scanf("%d", &loc);
    printf("Enter data\n");
    scanf("%d", &item);
    ptr->data = item;
    temp = head;
    for (i = 0; i < loc - 1; i++)
    {
        temp = temp->next;
    }
    ptr->next = temp->next;
    temp->next = ptr;
}

void delete_beg()
{
    struct node *temp;
    if (head == NULL)
    {
        printf("\n List is empty \n");
    }
    else
    {
        if (head->next == head)
        {
            free(head);
        }

        else
        {
            temp = head;
            while (temp->next != head)
            {
                temp = temp->next;
            }
            temp->next = head->next;

            free(head);
            head = temp->next;
        }
        printf("\n Node deleted \n");
    }
}

void delete_end()
{
    struct node *temp;
    struct node *p;
    if (head == NULL)
        printf("\n List is empty \n");
    else
    {
        if (head->next == head)
        {
            free(head);
        }

        else
        {
            temp = head->next;
            p = head;
            while (temp->next != head)
            {
                temp = temp->next;
                p = p->next;
            }
            p->next = head;

            free(temp);
        }
    }
}

void delete_specific()
{
    int loc;
    printf("\n Enter the location");
    scanf("%d", &loc);
    struct node *temp, *p;
    temp = head->next;
    p = head;
    for (int i = 0; i < loc - 1; i++)
    {
        temp = temp->next;
        p = p->next;
    }

    p->next = temp->next;
    free(temp);
}

void display()
{
    struct node *newnode;
    printf("\n printing values \n");
    newnode = head;

    while (newnode->next != head)
    {
        printf("%d\n", newnode->data);
        newnode = newnode->next;
    }
    printf("%d", newnode->data);
}