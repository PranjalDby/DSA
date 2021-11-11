#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
    // programs to read array which stores the marks and subject
    int arr[5][3];
    int i,j;
    for ( i = 0; i < 5; i++)
    {
        printf("enter the marks gained by student %d\n",i+1);
        for ( j = 0;j<3; j++)
        {
            printf("\nmarks [%d][%d]:",i,j);
            scanf("%d",&arr[i][j]);
        }
        
    }
    for ( j = 0;j<3;j++)
    {
        int marks=-1;
        for ( i = 0; i < 5; i++)
        {
            /* code */
        if(arr[i][j]>marks)
        {
            marks=arr[i][j];
        }
        }
        printf("the max mark obtained is in subject:%d\n",marks,j+1);
    }
    
    
}