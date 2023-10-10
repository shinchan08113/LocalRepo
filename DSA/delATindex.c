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
        printf("ELEMENTS :%d\n", ptr->data);
        ptr = ptr->next;
    }
}
struct node *deleteATindex(struct node *head, int index)
{
    struct node *p = head;
    struct node *q = head->next;
    for (int i = 0; i < index - 1; i++)
    {
        p = p->next;
        q = q->next;
    }
    p->next = q->next;
    free(q);
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

    second->data = 6;
    second->next = third;

    third->data = 5;
    third->next = fourth;

    fourth->data = 8;
    fourth->next = NULL;

    printf("linked list before deltion\n");
    linkedlisttraversal(head);
    head = deleteATindex(head, 2);
    printf("linked list after deletion\n");
    linkedlisttraversal(head);
    return 0;
}