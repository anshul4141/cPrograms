#include <stdio.h>

/**
 * @brief The main function demonstrates basic input and output in C.
 *
 * This function prompts the user to enter an integer, reads the integer value from input,
 * and then prints the value entered by the user.
 *
 */
void main()
{
    int number; /**< Integer variable to store the user's input. */

    // Prompt the user to enter a number
    printf("Enter a number: ");

    // Read the integer value from user input
    scanf("%d", &number);

    // Print the value entered by the user
    printf("You entered: %d\n", number);
}