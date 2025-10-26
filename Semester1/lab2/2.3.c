// 3. ⁠Write a program to calculate Compound Interest.

#include <stdio.h>
#include <math.h>
int main()
{
    float amount ,originalamount , r , n , t   ;
    printf("Name - Aditya Dabral\nSAP iD - 590029459\nCourse-BCA\nBatch-6");
    printf("\n-------------------------------------------------\n");
    printf("Enter The amount you want to have compound Interest on");
     scanf("%f", &originalamount);
    printf("Enter rate of interest");
     scanf("%f", &r);
    printf("Enter the number of time the interest takes place in a year");
     scanf("%f", &n);
    printf("Enter the total number of year");
     scanf("%f", &t);
    r=r/100;
    amount = originalamount * pow(1 + r/n, n * t);
     printf("Total Amount is: %.2f\n", amount);
}
