#include <stdio.h>

void main()
{
    int amount, notes500, notes100, notes50, notes20, notes10, notes5, notes2, notes1;

    // Prompt the user to enter the amount
    printf("Enter the amount: ");
    scanf("%d", &amount);

    // Calculate the number of 500 notes
    notes500 = amount / 500;
    amount %= 500;

    // Calculate the number of 100 notes
    notes100 = amount / 100;
    amount %= 100;

    // Calculate the number of 50 notes
    notes50 = amount / 50;
    amount %= 50;

    // Calculate the number of 20 notes
    notes20 = amount / 20;
    amount %= 20;

    // Calculate the number of 10 notes
    notes10 = amount / 10;
    amount %= 10;

    // Calculate the number of 5 notes
    notes5 = amount / 5;
    amount %= 5;

    // Calculate the number of 2 notes
    notes2 = amount / 2;
    amount %= 2;

    // The remaining amount will be in 1 notes
    notes1 = amount;

    // Output the number of notes for each denomination
    printf("500: %d\n100: %d\n50: %d\n20: %d\n10: %d\n5: %d\n2: %d\n1: %d\n",
           notes500, notes100, notes50, notes20, notes10, notes5, notes2, notes1);
}