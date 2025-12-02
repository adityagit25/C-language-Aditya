//Q29: Write a program to calculate the factorial of a number.


// Aditya Dabral
// 590029459

#include <stdio.h>

void main() {
    int num, factorial = 1;

    printf("Enter a number: ");
    scanf("%d", &num);
    for(int i = 1; i <= num; i++) {
        factorial *= i;
    }

    printf("Factorial of %d is %d\n", num, factorial);
}