#include <stdio.h>

void main() {
    int num = 153;
    int temp = 0;
    int num2 = num;
    int r = 0;

    while (num2 != 0) {
        r = num2 % 10;
        temp = temp + r * r * r;
        num2 = num2 / 10;
    }

    if (temp == num) {
        printf("Armstrong Number\n");
    } else {
        printf("Not an Armstrong Number\n");
    }
}