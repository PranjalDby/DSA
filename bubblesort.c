#include <stdio.h>
#include <stdlib.h>
#define Max 5
int bubblesort(int arr[], int s)
{
    int i, j;
    for (i = 0; i < s; i++)
    {
        for (j = i; j < s - 1; j++)
        {
            if (arr[i] > arr[j])
            {
                int temp;
                temp = arr[j];
                arr[j] = arr[i];
                arr[i] = temp;
            }
        }
    }
}
int main()
{
    int arr[Max] = {30, 52, 29, 87};
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