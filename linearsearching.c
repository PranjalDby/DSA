#include<stdio.h>
#include<stdlib.h>
#include<string.h>
# define Max 6
int main()
{
    //in linear search we can search  an we can serach an element by moving one by one..
    //we apply this method only on unsorted list
    int arr[Max]={3,9,1,6,8,12};
    int pos=-1,val;
    printf("enter the value that you want to find:\n");
    scanf("%d",&val);
    int i;
    for (i = 0; i < Max; i++)
    {
        if(arr[i]==val)
        {
            pos=i;
            printf("pos of element is :%d\n",pos);
            break;
        }
    }
    if (pos==-1)
    {
        printf("value not find:\n");
    }
    
    
    
}