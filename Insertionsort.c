#include <stdio.h>
#include <stdlib.h>
#define Max 5
int insertionsort(int arr[], int size)
{
    int i, j, temp;
    for (i = 1; i < Max; i++)
    {
        temp = arr[i];
        j = i - 1;
        while ((temp < arr[j]) && j >= 0)
        {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = temp;
        ;
    }
}
int main()
{
    int arr[Max] = {39, 9, 45, 63, 18};
    int size = Max;
    int i;
    for (i = 0; i < size; i++)
    {
        printf("%d\n", arr[i]);
    }
    insertionsort(arr, size);
    printf("array after sorting:\n");
    for (i = 0; i < Max; i++)
    {
        printf("%d\n", arr[i]);
    }
}