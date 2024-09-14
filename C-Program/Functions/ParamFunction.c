#include <stdio.h>

void sum(int a, int b)
{
    printf("sum of num = %d\n", a + b);
}

void multi(int a, int b)
{
     printf("multi of num =  %d\n", a * b);
}

void main()
{
    sum(5, 10);
    multi(4, 2);
}