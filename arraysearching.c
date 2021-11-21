#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void search(int arr[10][10],int row,int col)
{   int i,j,element,found_row,found_col;
    printf("enter the elements of an arr:\n");
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    printf("enter the element that you want to search:\n");
    scanf("%d",&element);
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            if(element==arr[i][j])
            {
                found_row=i;
                found_col=j;
                printf("the number found at %d row and %d col:\n",found_row,found_col);
            }
            else{
                printf("!not found\n");
                exit(1);
            }
        }
    }
}
int main()
{
    int arr[10][10];
    int row,col;
    printf("enter the row and column:\n");
    scanf("%d%d",&row,&col);
    search(arr,row,col);   
}