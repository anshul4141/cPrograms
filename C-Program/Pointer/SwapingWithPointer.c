#include <stdio.h>

/*
 * Function to swap the values of two integers using pointers.
 * Parameters:
 *   - int *x: pointer to the first integer
 *   - int *y: pointer to the second integer
 */
void swap(int *x, int *y)
{
    int temp = *x; // Store the value of the first integer in a temporary variable
    *x = *y;       // Assign the value of the second integer to the first integer
    *y = temp;     // Assign the value of the temporary variable to the second integer
}

/*
 * Main function demonstrating the swapping of two variables using the swap function.
 */
void main()
{
    int a = 10, b = 20; // Declare two integers, a and b, and initialize them

    // Print the values of a and b before swapping
    printf("Before swapping: a = %d, b = %d\n", a, b);

    // Call the swap function and pass the addresses of 'a' and 'b'
    swap(&a, &b);

    // Print the values of a and b after swapping
    printf("After swapping: a = %d, b = %d\n", a, b);
}