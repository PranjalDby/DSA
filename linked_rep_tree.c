#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct node 
{
    struct node * left;
    int data;
    struct node * right;
};
struct node * root;
void  tree(struct node * root)
{
   root=NULL;
}
void display(struct node * root)
{
    struct node * ptr;
    ptr= root;
    while (ptr!=NULL)
    {
        printf("\t%d\n",ptr->data);
        printf("lsubtr(%d)\b",ptr->left->data);
        printf("\t");
        printf("\t Rsubtr(%d)",ptr->right->data);
        ptr= ptr->left;
        ptr->left=ptr->left->left;
        ptr->right=ptr->right->right;
    }
    
}
struct node * insert(struct node * ptr,int val,int val2,int val3)
{
    struct node * rnode;
    rnode=(struct node *)malloc(sizeof(struct node));
    rnode->data=val;
    rnode->left=NULL;
    rnode->right=NULL;
    if (ptr==NULL)
    {
        ptr=rnode;
        ptr->left=NULL;
        ptr->right=NULL;
    }
    else
    {
        rnode->left->data=val2;
        rnode->right->data=val3;
    }
    return ptr;
    
}
struct node * pre_traversal(struct node * root)
{
    while (root!=NULL)
    {
        printf("%d\n",root->data);
        pre_traversal(root->left);
        pre_traversal(root->right);

    }
    return root;
    

}
int main()
{
    int data,ldata,rdata;
    tree(root);
    printf("enter the data of root:\n");
    scanf("%d",&data);
    printf("enter the data of left data right data:\n");
    scanf("%d%d",&ldata,&rdata);
    root=insert(root,data,ldata,rdata);
   /*  root=pre_traversal(root); */
    display(root);

}