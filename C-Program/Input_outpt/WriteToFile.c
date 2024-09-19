#include <stdio.h>

void main()
{
    // Open the file in write mode. "w" means writing, and if the file doesn't exist, it will be created.
    FILE *file = fopen("D:\\mayank.txt", "w");

    // Check if the file was opened successfully. If not, print an error message and exit the program.
    if (file == NULL)
    {
        printf("Failed to open file.\n");
    }

    // Write a string to the file
    fprintf(file, "Hello, World!\n");

    // confirm message
    printf("data write in you file success..");

    // Close the file to release the resources
    fclose(file);
}