// Experiment 2: Operators
// 1. WAP a C program to calculate the area and perimeter of a rectangle based on its length and width.

#include <stdio.h>
int main()
{
    float l;
    float w;
    float area;
    float perimeter;
    printf("Name - Aditya Dabral\nSAP iD - 590029459\nCourse-BCA\nBatch-6");
    printf("\n-------------------------------------------------\n");
    printf("Enter Lenght of Rectangle");
     scanf("%f", &l);
    printf("Enter width of Rectangle");
     scanf("%f", &w);
     perimeter = 2 * (w + l);
    printf("The perimeter of the rectangle is %.2f\n", perimeter);
     area = w * l;
    printf("The area of the rectangle is: %.2f\n", area);
    return 0;
}
