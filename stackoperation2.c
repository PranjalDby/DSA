#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct node
{
    int data;
    struct node *next;
};
struct node *top = NULL;
struct node *push(struct node *head, int val)
{
    struct node *new;
    new->data = val;
    if (top == NULL)
    {
        new->next = NULL;
        top = new;
    }
    else
    {
        new->next = top;
        top = new;
    }
    return top;
}
struct node *pop(struct node *top)
{
    int vals;
    struct node *ptr;
     ptr = top;
    if (top == NULL)
    {
        printf("underflow\n");
    }
    else
    {
        top=top->next;
        vals = ptr->data;
        printf("%d data is removed:\n",vals);
         free(ptr);
    }
    return top;
}
struct node * traverse(struct node *top, int val)
{
    struct node *ptr = top;
    while (ptr != NULL)
    {
        printf("%d\n", ptr->data);
        ptr = ptr->next;
    }
}
int main()
{
    int val, op;
    printf(".....1 for push\n");
    printf(".....2 for pop\n");
    printf("enter the option:\n");
    scanf("%d", &op);

    switch (op)
    {
    case 1:
        printf("enter the val to be inserted\n");
        scanf("%d", &val);
        top = push(top, val);
        traverse(top,val);
        break;
    case 2:
    top=pop(top);
    break;
    }
}