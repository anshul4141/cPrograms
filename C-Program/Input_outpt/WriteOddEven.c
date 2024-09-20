#include <stdio.h>

void main()
{
    int number;

    // Open the files in write mode
    FILE *oddFile = fopen("D:\\odd.txt", "w");
    FILE *evenFile = fopen("D:\\even.txt", "w");

    // Check if files are opened successfully
    if (oddFile == NULL || evenFile == NULL)
    {
        printf("Error opening files.\n");
    }

    printf("Enter number :");
    scanf("%d", &number);

    // Check if the number is even or odd and write it to the corresponding file
    if (number % 2 == 0)
    {
        fprintf(evenFile, "%d\n", number);
    }
    else
    {
        fprintf(oddFile, "%d\n", number);
    }
    // Confirm that data has been written
    printf("Data has been successfully written to odd.txt and even.txt.\n");

    // Close the files
    fclose(oddFile);
    fclose(evenFile);
}
