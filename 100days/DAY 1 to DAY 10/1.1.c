// Q1: Write a program to input two numbers and display their sum.


#include <stdio.h>
void main()
{
    int a,b,c;
    printf("\nEnter first integer for addition: ");
    scanf("%d", &a);
    printf("\nEnter second integer for addition: ");
    scanf("%d", &b);
    c = a + b;
    printf("\nSum= %d", c);  
}
