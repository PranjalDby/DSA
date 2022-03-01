#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct node
{
    int data;
    struct node *left, *right;
};
struct node *create(struct node *root, int rs)
{
    struct node *r = (struct node *)malloc(sizeof(struct node));
    r->data = rs;
    r->right=NULL;
    r->left=NULL;
    create(r->left,7);
    create(r->right,8);
}
void display(struct node *r)
{
    struct node *ptr = r;
    while (ptr!= NULL)
    {
        display(ptr->left);
        printf("%d\n", ptr->data);
        display(ptr->right);
    }
}
int main()
{
    struct node *root =(struct node *)malloc(sizeof(struct node));
    int r, l1, r1;
    root=create(root, 5);
    display(root);
}