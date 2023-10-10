#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *left;
    struct node *right;
};
void main()
{
    struct node *root;
    root = create();
}
struct node *create()
{
    struct node *newnode;
    int data, choice;
    newnode = (struct node *)malloc(sizeof(struct node));
    printf("press 0 to exit\n");
    printf("press 1 fo new node\n");
    printf("Enter your choice\n");
    scanf("%d", &choice);
    if (choice == 0)
    {
        return 0;
    }
    else
    {
        printf("Enter the data\n");
        scanf("%d", &data);
        newnode->data = data;
        printf("Enter the left child of %d", data);
        newnode->left = create();
        printf("Enter the right child of %d", data);
        newnode->right = create();
        return newnode;
    }
}