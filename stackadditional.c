#include<stdio.h>
#include<stdlib.h>
#include<string.h>
# define MAX 10
int topA=-1,topB=MAX;
int stackA[MAX];
int pushA(int stack[],int val)
{
    if (topA>=MAX-1)
    {
        printf("overflow!\n");
    }
    else
    {
        topA=topA+1;
        stackA[topA]=val;
    }

    
}
void traverse()
{
    int i;
    if (topA==-1)
    {
        printf("stack empty:\n");
    }
    else
    {
        for ( i =topA; i>=0; i--)
        {
            printf("%d\n",stackA[i]);
        }
           
    }
    
}
int main()
{
    
    int option,val;
    printf("...1 for push in stackA\n");
    printf("...1 for push in stackB\n");
    printf("enter the option:\n");
    scanf("%d",&option);
    switch (option)
    {
    case 1:
    printf("enter the val that you want to push in stack A:\n");
    scanf("%d",&val);
    pushA(stackA,val);
    traverse();
        break;
    
    default:
        break;
    }

}