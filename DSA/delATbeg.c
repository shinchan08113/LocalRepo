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
        printf("ELEMENT:%d \n ", ptr->data);
        ptr = ptr->next;
    }
}
struct node *deletefirst(struct node *head)
{
    struct node *ptr = head;
    head = head->next;
    free(ptr);
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

    head->data = 5;
    head->next = second;

    second->data = 10;
    second->next = third;

    third->data = 15;
    third->next = fourth;

    fourth->data = 20;
    fourth->next = NULL;

    printf("linkedl̥ist before deletion\n");
    linkedlisttraversal(head);
    head = deletefirst(head);
    printf("linkedlist after deletion\n");
    linkedlisttraversal(head);
    return 0;
}