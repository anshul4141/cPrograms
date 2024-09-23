#include <stdio.h>  // Include standard input/output library
#include <string.h> // Include string manipulation library for strcpy

// Define a union called 'Data'
// A union allows different data types to occupy the same memory location
union Data
{
    int i;        // An integer value
    float f;      // A floating-point value
    char str[20]; // A string (character array) with a maximum of 20 characters
};

int main()
{
    // Declare a variable 'data' of type 'union Data'
    union Data data;

    // Assign an integer value to the 'i' member of the union
    data.i = 10;
    printf("Integer: %d\n", data.i); // Output the value of the 'i' member

    // Assign a floating-point value to the 'f' member of the union
    data.f = 220.5;
    printf("Float: %.2f\n", data.f); // Output the value of the 'f' member

    // Assign a string value to the 'str' member of the union using strcpy
    strcpy(data.str, "Hello");
    printf("String: %s\n", data.str); // Output the value of the 'str' member

    // Return 0 to indicate successful program execution
    return 0;
}