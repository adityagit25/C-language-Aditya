// 4. ⁠Write a program to find the roots of the quadratic equations.

#include <stdio.h>
#include <math.h>
int main()
{
    float x1, x2, a, b, c, t;
    printf("Name - Aditya Dabral\nSAP iD - 590029459\nCourse-BCA\nBatch-6");
    printf("\n-------------------------------------------------\n");
    printf("Enter a number one");
    scanf("%f", &a);
    printf("Enter a number two");
    scanf("%f", &b);
    printf("Enter a number three");
    scanf("%f", &c);
    t = (b * b) - (4 * a * c);
    t = sqrt(t);
    x1 = (-b + t) / (2 * a);
    x2 = (-b - t) / (2 * a);
    printf("The first root is %.2f\n", x1);
    printf("The second root is  %.2f\n", x2);
}
