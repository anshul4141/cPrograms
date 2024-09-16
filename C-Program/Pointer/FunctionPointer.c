#include <stdio.h>

/*
 * Function to print a greeting message.
 * No parameters are required and no return value.
 */
void greet()
{
    printf("Hello, welcome!\n");
}

/*
 * Function to add two integers and return the sum.
 * Parameters:
 *   - int a: first integer
 *   - int b: second integer
 * Returns the sum of a and b.
 */
int add(int a, int b)
{
    return a + b;
}

/*
 * Main function demonstrating the use of function pointers.
 */
void main()
{
    // Declare a function pointer 'greetPtr' that points to the greet function
    void (*greetPtr)() = greet;

    // Declare a function pointer 'addPtr' that points to the add function
    int (*addPtr)(int, int) = add;

    // Call the greet function using the function pointer
    greetPtr(); // Calls greet()

    // Call the add function using the function pointer and store the result in 'sum'
    int sum = addPtr(5, 10); // Calls add(5, 10)

    // Print the sum of 5 and 10
    printf("Sum of 5 and 10: %d\n", sum);
}