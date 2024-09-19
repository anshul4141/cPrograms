#include <stdio.h>

int linearSearch(int arr[], int n, int x)
{
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == x)
        {
            return i;
        }
    }
    return -1;
}

void main()
{
    int arr[] = {2, 3, 4, 10, 40};
    int x = 11;

    int n = sizeof(arr) / sizeof(arr[0]);

    int result = linearSearch(arr, n, x);
    if (result == -1)
        printf("Element is not present in array\n");
    else
        printf("Element is present at index %d\n", result);
}