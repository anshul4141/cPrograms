#include <stdio.h>

/**
 * @brief The main function demonstrates the use of a switch statement.
 *
 * This function uses a switch statement to print the name of the day corresponding to the integer value of 'day'.
 *
 * @return int Returns 0 to indicate successful execution.
 */
void main()
{
    int day = 3; /**< Integer variable representing the day of the week. */

    // Switch statement to determine and print the day of the week
    switch (day)
    {
    case 1:
        printf("Monday\n"); /**< Prints "Monday" if day is 1. */
        break;              /**< Exits the switch statement after the case is executed. */
    case 2:
        printf("Tuesday\n"); /**< Prints "Tuesday" if day is 2. */
        break;               /**< Exits the switch statement after the case is executed. */
    case 3:
        printf("Wednesday\n"); /**< Prints "Wednesday" if day is 3. */
        break;                 /**< Exits the switch statement after the case is executed. */
    default:
        printf("Other day\n"); /**< Prints "Other day" for any value not explicitly handled by the cases. */
    }
}