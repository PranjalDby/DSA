#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
    // accessing the elements of array
    int arr[2][3][2]={1,2,3,4,6,8,10,20,22,24,28,30};
    int i,j,k;
   /*  printf("the array is:\n");
    for(i=0;i<2;i++)
    {
        for(j=0;j<3;j++)
        {
            for(k=0;k<2;k++)
            {
                printf("%d\n",arr[i][j][k]);
            }
        }
    }
  */
    // pointer to multidimensional array
    /* 
    int (*ptr)[3][2];
    ptr=arr;
    printf("accessing array with ptr:\n");
    for(i=0;i<2;i++)
    {
        for(j=0;j<3;j++)
        {
            for(k=0;k<2;k++)
            {
                printf("%d\n",*(*(*(ptr+i)+j)+k));
            }
        }
    } */
    // more on multidimensional array
    

}