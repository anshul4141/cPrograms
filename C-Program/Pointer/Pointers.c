#include <stdio.h>

/*
 * This program demonstrates the use of pointers in C.
 * A pointer is a variable that stores the address of another variable.
 */

void main()
{
    int a = 10; // Declare an integer variable 'a' and initialize it with the value 10

    // Declare a pointer variable 'ptr' which will store the address of an integer
    int *ptr;

    // Assign the address of variable 'a' to the pointer 'ptr'
    ptr = &a;

    // Print the value of 'a'
    printf("Value of a: %d\n", a);

    // Print the memory address where 'a' is stored (address of 'a')
    printf("Address of a: %p\n", &a);

    // Print the value of pointer 'ptr', which is the address of 'a'
    printf("Value of ptr (address stored in ptr): %p\n", ptr);

    // Dereference the pointer 'ptr' to get the value stored at the address 'ptr' is pointing to, which is the value of 'a'
    printf("Value at ptr (value of a via pointer): %d\n", *ptr);
}
