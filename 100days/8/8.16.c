//Q16: Write a program to input three numbers and find the largest among them using if–else.

// Aditya Dabral
// 590029459

#include <stdio.h>

void main() {
    
    int a,b,c;
    printf("\nEnter first integer: ");
    scanf("%d", &a);
    printf("\nEnter second integer: ");
    scanf("%d", &b);
    printf("\nEnter third integer: ");
    scanf("%d", &c);

    if (a >= b && a >= c) {
        printf("Largest is %d\n", a);
    } else if (b >= a && b >= c) {
        printf("Largest is %d\n", b);
    } else {
        printf("Largest is %d\n", c);
    }

}