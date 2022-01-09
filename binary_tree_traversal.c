#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct node
{
    struct node *left, *right;
    int data;
};
struct node *root;
/* void create(struct node * tree)
{
    tree=NULL;
} */
struct node * insert(struct node * rnode,int data)
{
    struct node * ptr;
    if (rnode==NULL)
    {
        ptr=(struct node *)malloc(sizeof(struct node));
        ptr->data=data;
        rnode=ptr;
        rnode->left=rnode->right=NULL;
    }
    else
    {
        if (data<rnode->left->data)
        {
            return insert(rnode->left,data);
        }
        else
        {
            
           return insert(ptr->right,data);
        }
        
    }
    return rnode;
    
}
struct node * pre_traversal(struct node * pre)
{
    if (pre==NULL)
    {
        return pre;
    }
    else
    {
        printf("%d\n",pre->data);
        return pre_traversal(pre->left);
        return pre_traversal(pre->right);
    }
    
    
}
struct node * pos_traversa(struct node * ptr)
{
    if (ptr==NULL)
    {
        return ptr;
    }
    else
    {
        return pos_traversa(ptr->left);
        return pos_traversa(ptr->right);
        printf("%d\n",ptr->data);
    }
    
}
void display(struct node * rnode)
{
   printf("%d\n",rnode->left->data);
   printf("%d\n",rnode->right->data);
   
}
int main()
{
    int data;
    printf("num:\n");
    scanf("%d",&data);
    int opt;
    do
    {
    printf("enter the operation:\n");
    scanf("%d",&opt);
    switch (opt)
    {
    case 1:
    root=insert(root,data);
        break;
    case 2:
    root=pre_traversal(root);
    display(root);
    case 3:
    root=pos_traversa(root);
    display(root);
    }
    }while(opt!=4);

}