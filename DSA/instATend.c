#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
};
void linkedlisttraversal(struct node *ptr)
{
    while (ptr != NULL)
    {
        printf("element:%d\n", ptr->data);
        ptr = ptr->next;
    }
}
struct node *insertATend(struct node *head, int data)
{
    struct node *ptr = (struct node *)malloc(sizeof(struct node));
    ptr->data = data;
    struct node *P = head;
    while (P->next != NULL)
    {
        P = P->next;
    }
    P->next = ptr;
    ptr->next = NULL;
    return head;
}
int main()
{
    struct node *head;
    struct node *second;
    struct node *third;
    struct node *fourth;

    head = (struct node *)malloc(sizeof(struct node));
    second = (struct node *)malloc(sizeof(struct node));
    third = (struct node *)malloc(sizeof(struct node));
    fourth = (struct node *)malloc(sizeof(struct node));

    head->data = 2;
    head->next = second;

    second->data = 4;
    second->next = third;

    third->data = 6;
    third->next = fourth;

    fourth->data = 8;
    fourth->next = NULL;

    printf("linked list before insertion\n", head);
    linkedlisttraversal(head);
    head = insertATend(head, 12);
    printf("linked list after insertion\n", head);
    linkedlisttraversal(head);
    return 0;
}
