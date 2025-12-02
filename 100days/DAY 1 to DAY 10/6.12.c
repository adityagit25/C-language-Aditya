//Q12: Write a program to input an integer and check whether it is positive, negative or zero using nested if–else.

// Aditya Dabral
// 590029459

#include <stdio.h>

void main() {
    int x;
    printf("Enter an integer: ");
    scanf("%d", &x);

    if (x >= 0) {
        if (x == 0) {
            printf("Zero\n");
        } else {
            printf("Positive\n");
        }
    } else {
        printf("Negative\n");
    }

}