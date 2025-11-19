//Q4: Write a program to calculate the area and circumference of a circle given its radius.

// Aditya Dabral
// 590029459

#include <stdio.h>
void main()
{
    float a,b,c,d,e;
    e=3.14;
    printf("\nEnter radius of circle: ");
    scanf("%f", &a);
    b = e*a*a;
    c = 2*e*a;
    printf("\nArea: %f", b);
    printf("\nCircumference: %f", c);
}
