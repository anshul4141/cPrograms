#include <stdio.h>

void main()
{
    float units, bill, surcharge;

    // Prompt the user to enter the number of units consumed
    printf("Enter electricity units consumed: ");
    scanf("%f", &units);

    // Calculate bill based on the number of units consumed
    if (units <= 50)
    {
        bill = units * 0.50;
    }
    else if (units <= 150)
    {
        bill = 50 * 0.50 + (units - 50) * 0.75;
    }
    else if (units <= 250)
    {
        bill = 50 * 0.50 + 100 * 0.75 + (units - 150) * 1.20;
    }
    else
    {
        bill = 50 * 0.50 + 100 * 0.75 + 100 * 1.20 + (units - 250) * 1.50;
    }

    // Add a surcharge of 20% to the bill
    surcharge = bill * 0.20;
    bill += surcharge;

    // Display the total electricity bill
    printf("Total electricity bill: Rs. %.2f\n", bill);
}
