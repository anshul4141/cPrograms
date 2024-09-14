#include <stdio.h>

void main()
{
    int a;
    int result;

    printf("Enter an integer: ");
    result = scanf("%d", &a);

    if (result != 1)
    {
        printf("Error: not a valid integer\n");
        // Clear invalid input from buffer
        while (getchar() != '\n')
            ;
    }
    else
    {
        printf("Read in %d\n", a);
    }
}
