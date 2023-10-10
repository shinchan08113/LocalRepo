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
        printf("Element :%d\n ", ptr->data);
        ptr = ptr->next;
    }
}
struct node *insertATfirst(struct node *head, int data)
{
    struct node *ptr = (struct node *)malloc(sizeof(struct node));
    ptr->next = head;
    ptr->data = data;
    return ptr;
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

    head->data = 8;
    head->next = second;

    second->data = 88;
    second->next = third;

    third->data = 888;
    third->next = third;

    fourth->data = 8888;
    fourth->next = NULL;

    linkedlisttraversal(head);
    head = insertATfirst(head, 56);
    linkedlisttraversal(head);

    return 0;
}