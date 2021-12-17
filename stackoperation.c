#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define MAX 5
int stack[MAX]={2,4,6};
int top=2;
void push(int arr[],int val)
{
    if(top>=MAX)
    {
        printf("stack overflow\n");
    }
    else{
        top=top+1;
        stack[top]=val;
    }
}
int pop(int stack[])
{
    int item;
    if (top==-1)
    {
        printf("underflow!\n");
    }
    else
    {
        item=stack[top];
        top=top-1;
    }
    return item;
}
int peep(int stack[])
{
    if (top==-1)
    {
        printf("empty\n");
    }
    else{
        return stack[top];
    }
    
}
void traverse(int stack[])
{
    int i;
    if (top==-1)
    {
        printf("stakc empty:\n");
    }
    else
    {
        for(i=top;i>=0;i--)
        {
            printf("%d\n",stack[i]);
        }
    }
    
}
int main()
{
    int val,opt;
    printf("1 for push..\n");
    printf("2 for pop..\n");
    printf("3 for peek..\n");
    printf("enter the option:\n");
    scanf("%d",&opt);
    switch (opt)
    {
        case 1:
        printf("enter the val:\n");
        scanf("%d",&val);
        push(stack,val);
        break;
        case 2:
        pop(stack);
        break;
        case 3:
        peep(stack);
    }
    traverse(stack);
}