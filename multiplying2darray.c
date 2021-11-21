#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
    int arr[10][10],arr2[10][10],arr3[10][10];
    int row1,row2,col1,col2,i,j,k;
    printf("enter the row and column of first:\n");
    scanf("%d%d",&row1,&col1);
    printf("enter the row and column of second matrix:\n");
    scanf("%d%d",&row2,&col2);
    if(col1!=row2)
    {
        printf("printf col of first matrix must be equal to row of second matrix:\n");
    }
    printf("enter the element of first array;\n");
    for(i=0;i<row1;i++)
    {
        for(j=0;j<col1;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    printf("enter the element of second array:\n");
    for(i=0;i<row2;i++)
    {
        for(j=0;j<col2;j++)
        {
            scanf("%d",&arr2[i][j]);
        }
    }
    for(i=0;i<row1;i++)
    {
        for(j=0;j<col2;j++)
        {
           arr3[i][j]=0;
           for(k=0;k<col2;k++)
           {
               arr3[i][j]+=arr[i][k]*arr2[k][j];
           }
        }
    }
    for(i=0;i<row1;i++)
    {
        for(j=0;j<col2;j++)
        {
            printf("%d\n",arr3[i][j]);
        }
    }
}