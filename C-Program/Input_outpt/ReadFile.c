#include <stdio.h>

void main()
{
    char buffer[100]; // Buffer to hold data read from the file

    // Open the file in read mode. "r" means reading, and if the file doesn't exist, fopen will return NULL.
    FILE *file = fopen("D:\\mayank.txt", "r");

    // Check if the file was opened successfully. If not, print an error message and exit the program.
    if (file == NULL)
    {
        printf("Failed to open file.\n");
    }

    // Read lines from the file until EOF (End of File) is reached. Each line is stored in the buffer.
    while (fgets(buffer, sizeof(buffer), file) != NULL)
    {
        // Print each line read from the file
        printf("%s", buffer);
    }

    // Close the file after reading is done
    fclose(file);
}
