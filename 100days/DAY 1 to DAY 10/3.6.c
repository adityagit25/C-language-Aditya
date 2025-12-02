//Q6: Write a program to swap two numbers using a third variable.

// Aditya Dabral
// 590029459

#include <stdio.h>
void main()
{
    int a,b,c;
    printf("\nEnter first integer: ");
    scanf("%d", &a);
    printf("\nEnter second integer: ");
    scanf("%d", &b);
    c = a;
    a = b;
    b = c;
    printf("\nAfter swap: %d %d", a, b);  
}