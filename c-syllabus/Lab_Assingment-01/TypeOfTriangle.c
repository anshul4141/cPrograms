#include <stdio.h>

void main()
{
    int side1, side2, side3;

    // Prompt the user to enter the sides of the triangle
    printf("Enter three sides of the triangle: ");
    scanf("%d %d %d", &side1, &side2, &side3);

    // Check if all three sides are equal, meaning it's an equilateral triangle
    if (side1 == side2 && side2 == side3)
    {
        printf("Equilateral triangle.\n");
    }
    // Check if two sides are equal, meaning it's an isosceles triangle
    else if (side1 == side2 || side2 == side3 || side1 == side3)
    {
        printf("Isosceles triangle.\n");
    }
    // If none of the sides are equal, it's a scalene triangle
    else
    {
        printf("Scalene triangle.\n");
    }
}
