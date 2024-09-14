#include <stdio.h>

void main()
{

    int i[] = {2, 1, 4, 3};

    // printf("%d\n", i[0]);
    //  printf("%d\n", i[1]);

    for (int a = 1; a <= 4; a++)
    {
        printf("%d\n", a, i[a]);
    }
}