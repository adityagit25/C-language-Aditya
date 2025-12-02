//Q2: Write a program to input two numbers and display their sum, difference, product, and quotient.



#include <stdio.h>
void main()

{
    int a,b,c,d,e,f;
    printf("\nEnter first integer: ");
    scanf("%d", &a);
    printf("\nEnter second integer: ");
    scanf("%d", &b);
    c = a + b;
    d = a - b;
    e = a * b;
    printf("Sum: %d", c);  
    printf("\nDiff: %d", d);  
    printf("\nProduct: %d", e);  
    if (b != 0) {
        f = a / b;
        printf("\nQuotient: %d", f); 
    } else {
        printf("\nDivision by zero is not allowed.");
    }
 
}