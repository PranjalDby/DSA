#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int sort(int arr[], int beg, int end)
{
    int i, j;
    int temp, loc, left, right;
    loc = left = beg, right = end;
    for (i = right; i >= loc; i--)
    {
        if (arr[loc] == arr[i])
        {
            return 1;
        }
        else if (arr[loc] > arr[i])
        {
            temp = arr[loc];
            arr[loc] = arr[i];
            arr[i] = temp;
            loc =i;
        }
        for (j =left; j<loc; j++)
        {
            if (arr[loc]==arr[j])
            {
                return 1;
            }
            else if (arr[loc]<arr[j])
            {
                temp=arr[j];
                arr[j]=arr[loc];
                arr[loc]=temp;
                loc=j;
            }
            
            
        }
        
        return loc;
    }
}
void quick_sort(int arr[], int beg, int end)
{
    int loc;
    if (beg < end)
    {
        loc = sort(arr, beg, end);
        quick_sort(arr, beg, loc - 1);
        quick_sort(arr, loc + 1, end);
    }
}
int main()
{
    int arr[5];
    int i, size = 5, temp;
    printf("enter the elemnent:\n");
    for (i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }
    quick_sort(arr, 0, size - 1);
    printf("array after sorting:\n");
    for (i = 0; i < size; i++)
    {
        printf("%d\n", arr[i]);
    }
}