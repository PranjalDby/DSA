#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
    char arr[10][10];
    char x[10][10];
    char comb[20][20];
    int i,j,row,col,row1,col1,k=0,l=0;
    printf("enter the maxlength:\n");
    scanf("%d",&row);
    printf("enter the column:\n");
    scanf("%d",&col);
    row1=row;
    col1=col;
    printf("enter the elements of array:\n");
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            scanf("%s",arr[i][j]);
            comb[k][l]=arr[i][j];
            k++,l++;
        }
    }
    printf("enter the characters :\n");
    for(i=0;i<row1;i++)
    {
        for(j=0;j<col1;j++)
        {
            scanf("%s",x[i][j]);
            comb[k][l]=x[i][j];
            k++,l++;
        }
    }
    int row_sum,col_sum;
    row_sum=row1+row;
    col_sum=col1+col;
    for(i=0;i<row_sum;i++)
    {
        for(j=0;j<col_sum;j++)
        {
            printf("%s",comb[i][j]);
        }
    }

}