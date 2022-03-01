#include <stdio.h>
#include <stdlib.h>
#define Max 6
int bubblesort(int arr[], int s)
{
    int i, j;
    for (i = 0; i < s-1; i++)
    {
        for (j = 0; j < s-i-1; j++)
        {
            if (arr[j] > arr[j+1])
            {
                int temp;
                temp = arr[j+1];
                arr[j+1] = arr[j];
                arr[j] = temp;
            }
        }
    }
}
int main()
{
    int arr[Max] = {30, 52, 29, 87,10};
    int size = Max - 1;
    int i;
    printf("array before sorting:\n");
    for (i = 0; i < size; i++)
    {
        printf("%d\n", arr[i]);
    }
    bubblesort(arr, size);
    printf("array after sorting:\n");
    for (i = 0; i < size; i++)
    {
        printf("%d\n", arr[i]);
    }
}