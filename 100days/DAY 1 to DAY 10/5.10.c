//Q10: Write a program to input time in seconds and convert it to hours:minutes:seconds format.

// Aditya Dabral
// 590029459
#include <stdio.h>
void main()
{
    int a,b,c,d;
    printf("Enter time in seconds: ");
    scanf("%d", &a);
    
    b= a / 3600;
    c = (a % 3600) / 60;
    d = a % 60;

    printf("%d:%d:%d",b,c,d);
}