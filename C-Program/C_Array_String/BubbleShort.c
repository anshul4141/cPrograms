#include <stdio.h>

void main()
{
    int num[] = {30, 20, 40, 10, 50, 60};
    int temp = 0;
    int n = sizeof(num) / sizeof(num[0]); // Calculate the length of the array

    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (num[i] > num[j])
            {
                temp = num[i];
                num[i] = num[j];
                num[j] = temp;
            }
        }
        printf("%d\n", num[i]);
    }
}
