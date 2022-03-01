#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int st[5];
int top=0;
void push(int val)
{
   
    st[++top]=val;
    
}
int pop()
{
    int temp;
    if (top==0)
    {
        printf("empty");
    }
    else
    {
        return(st[top--]);
    }
}
void display(int arr[5])
{
   
    for (int i = 1; i <=5; i++)
    {
        printf("%d\n",arr[i]);
    }
    
    
}
int main()
{
    int i,val;
    int arr[5];
    printf("enter the elements");
    for ( i = 1; i <=5; i++)
    {
        scanf("%d",&arr[i]);
    }
    for ( i =1; i <=5; i++)
    {
        push(arr[i]);
    }
    for (i = 1; i <=5; i++)
    {
        val=pop();
        arr[i]=val;
    }
    printf("\n");
display(arr);
    
    
}