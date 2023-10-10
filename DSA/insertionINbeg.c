#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
};
void linkedlisttraversal(struct node *head)
{
    struct node *ptr = head;
    do
    {
        printf("ELEMENTS is %d\n", ptr->data);
        ptr = ptr->next;
    } while (ptr != head);
}
struct node *insertATbeg(struct node *head, int data)
{
    struct node *ptr = (struct node *)malloc(sizeof(struct node));
    ptr->data = data;
    struct node *p = head->next;
    while (p->next != head)
    {
        p = p->next;
    }
    p->next = ptr;
    ptr->next = head;
    head = ptr;
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

    head->data = 4;
    head->next = second;

    second->data = 5;
    second->next = third;

    third->data = 8;
    third->next = fourth;

    fourth->data = 23;
    fourth->next = head;

    printf("circular linkedlist before insertion\n");
    linkedlisttraversal(head);
    head = insertATbeg(head, 65);
    printf("circular linkedlist afterinsertion\n");
    linkedlisttraversal(head);
    return 0;
}