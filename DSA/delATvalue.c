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
        printf("ELEMENT:%d\n", ptr->data);
        ptr = ptr->next;
    }
}
struct node *deleteATvalue(struct node *head, int value)
{
    struct node *p = head;
    struct node *q = head->next;
    while (q->data != value && q->next != NULL)
    {
        p = p->next;
        q = q->next;
    }
    if (q->data == value)
    {
        p->next = q->next;
        free(q);
    }
    return head;
}
int main()
{
    struct node *head;
    struct node *second;
    struct node *third;
    struct node *fourth;
    struct node *fifth;

    head = (struct node *)malloc(sizeof(struct node));
    second = (struct node *)malloc(sizeof(struct node));
    third = (struct node *)malloc(sizeof(struct node));
    fourth = (struct node *)malloc(sizeof(struct node));
    fifth = (struct node *)malloc(sizeof(struct node));

    head->data = 2;
    head->next = second;

    second->data = 8;
    second->next = third;

    third->data = 6;
    third->next = fourth;

    fourth->data = 64;
    fourth->next = fifth;

    fifth->data = 7;
    fifth->next = NULL;

    printf("linked list before deletion\n");
    linkedlisttraversal(head);
    head = deleteATvalue(head, 8);
    printf("linked list after deletion\n");
    linkedlisttraversal(head);
    return 0;
}