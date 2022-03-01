#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct node
{
    struct node *left;
    struct node *right;
    int data;
};
struct node *create(int data)
{
    struct node *new = (struct node *)malloc(sizeof(struct node));
    new->data = data;
    new->left = NULL;
    new->right = NULL;
    return new;
}
void inorder(struct node *ptr)
{
    struct node *p = ptr;
    if (ptr != NULL)
    {
        inorder(ptr->left);
        printf("%d\n", ptr->data);
        inorder(ptr->right);
    }
}
int isbst(struct node *ptr)
{
    struct node *prev = NULL;
    if (ptr != NULL)
    {
        if (!isbst(ptr->left))
        {
            return 0;
        }
        if (prev != NULL && ptr->data <= prev->data)
        {
            return 0;
        }
        prev = ptr;
        return isbst(ptr->right);
    }
}
int main()
{
    struct node *root = (struct node *)malloc(sizeof(struct node));
    struct node *root2 = (struct node *)malloc(sizeof(struct node));
    struct node *root3 = (struct node *)malloc(sizeof(struct node));
    root = create(38);
    root2 = create(3);
    root3 = create(33);
    root->left = root2;
    root->right = root3;
    inorder(root);
    printf("%d\n", isbst(root));
}