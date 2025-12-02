//Q13: Write a program to input a year and check whether it is a leap year or not using conditional statements.

// Aditya Dabral
// 590029459

#include <stdio.h>

void main() {
    
    int a;
    printf("Enter a year: ");
    scanf("%d", &a);
    if (a % 4 == 0) {
        if (a % 100 == 0) {
            if (a % 400 == 0) {
                printf("Leap year\n");
            }
            else {
                printf("Not a leap year\n");
            }
        }
        else {
            printf("Leap year\n");
        }
    } else {
        printf("Not a leap year\n");
    }

}