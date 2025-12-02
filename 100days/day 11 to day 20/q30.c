//Q30: Write a program to reverse a given number.


// Aditya Dabral
// 590029459

#include <stdio.h>
void main() {
    int num, reversed = 0;

    printf("Enter a number: ");
    scanf("%d", &num);
    while(num != 0) {
        int digit = num % 10;
        reversed = reversed * 10 + digit;
        num /= 10;
    }

    printf("Reversed number is %d\n", reversed);
}