#include <stdio.h>  // Include standard input/output library
#include <string.h> // Include string manipulation library for strcpy

// Define a structure called 'Person' to represent a person's details
struct Person
{
    char name[50]; // A string (character array) to store the name, with a maximum length of 50 characters
    int age;       // An integer to store the age of the person
    float height;  // A floating-point number to store the height of the person
};

int main()
{
    // Declare a variable 'person1' of type 'struct Person'
    struct Person person1;

    // Assign values to the fields of 'person1'
    strcpy(person1.name, "Mayank"); // Copy the string "Mayank" to the name field of 'person1'
    person1.age = 25;               // Set the age field of 'person1' to 25
    person1.height = 5.9;           // Set the height field of 'person1' to 5.9 (in feet)

    // Print the values stored in 'person1'
    printf("Name: %s\n", person1.name);     // Output the name of 'person1'
    printf("Age: %d\n", person1.age);       // Output the age of 'person1'
    printf("Height: %f\n", person1.height); // Output the height of 'person1' in floating-point format

    return 0; // Return 0 to indicate successful program execution
}