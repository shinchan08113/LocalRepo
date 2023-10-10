#include<stdio.h>
#include<stdlib.h>
void insert_beg();
void insert_end();
void delete_beg();
void delete_end();
void insert_specific();
void delete_specific();
void display();
struct node
{
    int data;
    struct node *next, *prev;
};
struct node *head, *temp;
int main()
{
    int s;
    do
    {
        int choice;
        printf("Press 1 for insertion at begining : \n");
        printf("Press 2 for insertion at end      : \n");
        printf("Press 3 for deletion at begining  : \n");
        printf("Press 4 for deletion at end       : \n");
        printf("Press 5 for insertion at specific position : \n");
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
            delete_beg();
            break;

        case 4:
            delete_end();
            break;

        case 5:
            insert_specific();
            break;

        case 6:
            delete_specific();
            break;

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
    printf("\n Enter the data : \n");
    scanf("%d", &item);
    struct node *ptr, *temp;
    ptr = (struct node *)malloc(sizeof(struct node));
    ptr->data = item;
    if (head == NULL)
    {
        printf("\n List is empty : \n");
        ptr->next = ptr;
        ptr->prev = ptr;
        head = ptr;
        printf("\n But node is inserted \n");
    }

    else
    {
        temp = head;
        while (temp->next != head)
        {
            temp = temp->next;
        }
        ptr->next = head;
        head->prev = ptr;
        temp->next = ptr;
        ptr->prev = temp;
        head = ptr;
        printf("\n Node inserted \n");
    }
}

void insert_end()
{
    int item;
    printf("\n Enter the data : \n");
    scanf("%d", &item);
    struct node *ptr, *temp;
    ptr = (struct node *)malloc(sizeof(struct node));
    ptr->data = item;

    if (head == NULL)
    {
        printf("\n List is empty : \n");
        ptr->next = ptr;
        ptr->prev = ptr;
        head = ptr;
        printf("\n But node is inserted \n");
    }

    else
    {
        temp = head;
        while (temp->next != head)
            temp = temp->next;
        temp->next = ptr;
        ptr->prev = temp;
        ptr->next = head;
        head->prev = ptr;
        printf("\n Node inserted \n");
    }
}

void insert_specific()
{
    int item, loc;
    printf("\n Enter the data : \n");
    scanf("%d", &item);
    printf("\n Enter the location \n");
    scanf("%d", &loc);
    struct node *ptr, *temp;
    ptr = (struct node *)malloc(sizeof(struct node));
    ptr->data = item;

    if (head == NULL)
    {
        printf("\n List is empty \n");
    }
    else
    {
        temp = head;
        for (int i = 0; i < loc - 1; i++)
        {
            temp = temp->next;
        }

        ptr->next = temp->next;
        temp->next->prev = ptr;
        temp->next = ptr;
        ptr->prev = temp;
    }
}

void delete_beg()
{
    if (head == NULL)
        printf("\n List is empty : \n");
    else
    {
        if (head->next == head)
            free(head);
        else
        {
            temp = head;
            while (temp->next != head)
                temp = temp->next;
            temp->next = head->next;
            free(head);
            head = temp->next;
        }
    }
    printf("\n Node deleted \n");
}

void delete_end()
{
    if (head == NULL)
        printf("\n List is empty : \n");
    else
    {
        if (head->next == head)
            free(head);
        else
        {
            temp = head;
            while (temp->next != head)
                temp = temp->next;
            head->prev = temp->prev;
            free(temp);
        }
    }
    printf("\n Node deleted \n");
}

void delete_specific()
{
    struct node *temp;
    int loc;
    printf("\n Enter the location \n");
    scanf("%d", &loc);
    if (head == NULL)
        printf("\n List is empty \n");
    else
    {
        temp = head;
        for (int i = 0; i < loc; i++)
        {
            temp = temp->next;
        }
        temp->next->prev = temp->prev;
        temp->prev->next = temp->next;
        free(temp);
    }
}

void display()
{
    struct node *newnode;
    printf("\n printing values \n");
    newnode = head;

    if (head == NULL)
    {
        printf("\n List is empty \n");
    }
    else
    {
        while (newnode->next != head)
        {
            printf("%d\n", newnode->data);
            newnode = newnode->next;
        }
        printf("%d", newnode->data);
    }
}