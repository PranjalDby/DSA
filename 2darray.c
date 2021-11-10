#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void traverse(int arr[10][10],int rows,int cols)
{
    printf("enter the rows and cols:\n");
    scanf("%d%d",&rows,&cols);
    printf("enter the elements:\n");
    int i,j;
    for(i=0;i<rows;i++)
    {
        for(j=0;j<cols;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
}
int main()
{/* 
    int arr[2][4];
    printf("enter the elements of an array:\n");
    for (int i = 0; i <2; i++)
    {
        for(int j=0;j<4;j++)
        {
            scanf("%d",&arr[i][j]);
            printf("array is [%d][%d]=%d\n",i,j,arr[i][j]);
        }
    }
     */
   /*  int arr[5]={2,4,6,8,9};
    int *ptr;
    ptr=&arr[0];
    for(int i=0;i<5;i++)
    {
    printf("%d\n",*(ptr+i));
    } */

    // formation of pointer array
    // int *ptr[4],p=1,q=4,r=8,s=10;
   /*  ptr[0]=&p;
    ptr[1]=&q;
    ptr[2]=&r;
    ptr[3]=&s;
    for(int i=0;i<4;i++)
    {
        printf("%d\n",*(ptr[i]));
    }
 */
/* int arr1[]={1,2,3,4},arr2[]={6,8,10,12};
    int *ptrs[2];
    ptrs[0]=&arr1[2];
    ptrs[1]=&arr2[3];
    for (int i = 0; i < 2; i++)
    {
        printf("%d\n",*(ptrs[i]));
    } */
    int arr[10][10],rows,cols;
    traverse(arr,rows,cols);
}
