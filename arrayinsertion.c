#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void insert(int arr[10],int size)
{
    int i,pos,element;
    printf("enter the element of an array;\n");
     for(i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("enter the pos of an array:\n");
    scanf("%d",&pos);
    printf("enter the element:\n");
    scanf("%d",&element);
    printf("\n");
     for(i=size-1;i>=pos;i--)
    {
        if(i>=pos)
        {
            arr[i+1]= arr[i];
        }
         arr[pos]=element;
    } 
 
  /*   for(i=pos;i<size-1;i++)
    {
       arr[i]=arr[i+1];
    } */
}
void display(int arr[10],int size)
{   
    int i;
    for(i=0;i<size;i++)
    {
        printf("%d\n",arr[i]);
    }
}
int main()
{
    int arr[10];
    int s;
    printf("enter the size of an array;\n");
    scanf("%d",&s);
    insert(arr,s);
    s=s+1;
   /* s=s-1; */
    display(arr,s);
}