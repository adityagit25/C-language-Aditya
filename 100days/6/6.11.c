//Q11: Write a program to input an integer and check whether it is even or odd using if–else.

// Aditya Dabral
// 590029459

#include <stdio.h>
void main() {

    int a;
    printf("Enter an integer: ");
    scanf("%d", &a);

    if (a % 2 == 0) {
        printf("%d is even\n", a);
    } else {
        printf("%d is odd\n", a);
    }
    
}