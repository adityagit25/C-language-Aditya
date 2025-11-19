//Q7: Write a program to swap two numbers without using a third variable.

// Aditya Dabral
// 590029459

#include <stdio.h>
void main()
{
    int a,b;
    printf("\nEnter first integer: ");
    scanf("%d", &a);
    printf("\nEnter second integer: ");
    scanf("%d", &b);
    a = a + b; 
    b = a - b; 
    a = a - b; 
    printf("\nAfter swap: %d %d", a, b);  
}