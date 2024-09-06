#include <stdio.h>

void main()
{
    int a;
    int flag;
    printf("Enter an integer: ");
    scanf("%d", &a);
    if (a == 0)
    {
        printf("Error: not an integer\n");
    }
    else
    {
        printf("Read in %d\n", a);
    }
}
