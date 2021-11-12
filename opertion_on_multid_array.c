#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{   //transpose..
    /* int arr[3][3],arr2[3][3];
    int i,j;
    int temp;
    printf("enter the elements of first array:\n");
    for ( i = 0; i <3; i++)
    {
        for(j=0;j<3;j++){
        scanf("%d",&arr[i][j]);
        }
    }printf("enter the element in second array:\n");
    for (i = 0; i <3; i++)
    {
        for ( j = 0;j<3; j++)
        {
            scanf("%d",&arr2[i][j]);
        }
        
    }
    for ( i = 0; i <3; i++)
    {
        for ( j = 0; j<3; j++)
        {
            arr[i][j]=temp;
            temp=arr2[i][j];
            arr2[i][j]=arr[i][j];
            printf("first array is[%d][%d]:%d\n",i,j,arr[i][j]);
        }
        
    }
     */
    //merging of array...?
   /*  int arr[3][3],arr2[3][3],arr3[6][6];
    int i,j;
    int p=0,q=0;
    printf("enter the element of first array:\n");
    for ( i = 0; i <3; i++)
    {   
        for(j=0;j<3;j++){
        scanf("%d",&arr[i][j]);
        arr3[p][q]=arr[i][j];
        p++,q++;
        }
    }
    printf("enter the element of second array:\n");
    for ( i = 0; i <3; i++)
    {   
        for(j=0;j<3;j++)
        {
        scanf("%d",&arr2[i][j]);
        arr3[p][q]=arr2[i][j];
        p++,q++;
        }
    }
    for ( p = 0; p<6; p++)
    {   
        for(q=0;q<6;q++){
            printf("merged array is:%d\n",arr3[i][j]);
        }
    }
     */
    int arr[10][10],arr2[10][10],arr3[10][10];
    int row1,row2,col1,col2,i,j;
    printf("enter the rows and column for first array:\n");
    scanf("%d%d",&row1,&col1);
    printf("enter the rows and column for second array:\n");
    scanf("%d%d",&row2,&col2);
    if(row1!=row2&&col1!=col2||col1!=col2)
    {
        printf("rows and columns must be same\n");
        goto end;
    }
    printf("enter the elements of first array:\n");
    for ( i = 0; i <row1; i++)
    {
        for(j=0;j<col1;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    int row_sum=row1;
    int col_sum=col1;
    printf("enter the element of second array:\n");
    for ( i = 0; i <row2; i++)
    {
        for(j=0;j<col2;j++)
        {
            scanf("%d",&arr2[i][j]);
        }
    }
    for(i=0;i<row_sum;i++)
    {
        for(j=0;j<col_sum;j++)
        {
            arr3[i][j]=arr[i][j] * arr2[i][j];
            printf("after array is:%d\n",arr3[i][j]);
        }
    }
    end:
    return 0;
    
    
    
}