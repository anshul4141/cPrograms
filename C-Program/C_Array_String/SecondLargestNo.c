#include <stdio.h>

void main()
{
    int num[] = {30, 20, 100, 50, 60};

    int temp = 0, count = 0;

    int n = sizeof(num) / sizeof(num[0]);

    for (int i = 0; i < n; i++)
    {
        if (temp < num[i])
        {
            count = temp;
            temp = num[i];
        }

        if (count < num[i] && temp > num[i])
        {
            count = num[i];
        }
    }
    printf("Second largest: %d\n", count);
}