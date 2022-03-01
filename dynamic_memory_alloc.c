#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
    int * ptr;
    ptr=(int *)malloc(2*sizeof(int));
    printf("enter the elements");
    for (int i = 0; i <2; i++)
    {
        scanf("%d",&ptr[i]);
    }
    for(int i=0;i<2;i++)
    {
        printf("%d\n",ptr[i]);
    }
    ptr=(int *)realloc(ptr,4*sizeof(int));
    printf("enter the elements again:\n");
    for (int i = 0; i <4; i++)
    {
        scanf("%d",&ptr[i]);
    }
    for (int i = 0; i <4; i++)
    {
        printf("%d\n",ptr[i]);
    }
    
    

}