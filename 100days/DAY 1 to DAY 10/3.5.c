//Q5: Write a program to convert temperature from Celsius to Fahrenheit.

// Aditya Dabral
// 590029459

#include <stdio.h>
void main()
{
    float c,f;
    printf("\nEnter temperature in Celsius: ");
    scanf("%f", &c);
    f = (c * 9/5) + 32;
    printf("\nFahrenheit: %f", f);
}