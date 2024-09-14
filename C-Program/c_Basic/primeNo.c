#include <stdio.h>

void main()
{

    int i = 4;
    int c = 0;

    for (int a = 2; a < i; a++)
    {

        if (i % a == 0)
        {
            c++;
        }
    }

    if (c != 0)
    {
        printf("this is not prime no");
    }
    else
    {
        printf("this is prime no");
    }
}