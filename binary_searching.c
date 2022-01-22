#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define Max 10
int binarysearch(int arr[], int val, int size, int beg)
{
    int mid;
    while (beg <= size)
    {
         mid = (beg + size) / 2;
        if (arr[mid] < val)
        {
            beg=mid+1;
            return binarysearch(arr,val,size,beg);
        }
        else if (arr[mid] > val)
        {
           size=mid-1;
            return binarysearch(arr,val,size,beg); 
        }
        else
        {
            
            return mid;
        }
        return -1;
    }
}
int main()
{
    //in this we discuss about Binary Searching
    //binary searching is process in which is better and efficient than linear search
    //we apply binary search in sorted array
    int arr[Max] = {2, 4, 6, 8, 10, 12, 14, 16, 18};
    int val;
    int n = Max - 1;
    printf("enter the value:\n");
    scanf("%d", &val);
    int result;
    result = binarysearch(arr, val, n, 0);
    if (result ==-1)
    {
        printf("no value find:\n");
    }
    else
    {
        printf("%d\n", result);
    }
}