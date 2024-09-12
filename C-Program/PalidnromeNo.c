#include <stdio.h>

void main() {
    int num = 131;
    int r = 0;
    int sum = 0;
    int num2 = num;

    while (num2 != 0) {
        r = num2 % 10;
        sum = (sum * 10) + r;
        num2 = num2 / 10;
    }
    if (sum == num) {
        printf("This is a Palindrome\n");
    } else {
        printf("This is not a Palindrome\n");
    }
}