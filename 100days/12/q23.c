//Q23: Write a program to calculate a library fine based on late days.


// Aditya Dabral
// 590029459

#include <stdio.h>

void main() {
    int d;
    printf("Enter number of late days: ");
    scanf("%d", &d);

    if (d <= 5) {
        printf("Fine ₹%d\n", d * 2);
    } else if (d <= 10) {
        printf("Fine ₹%d\n", d * 4);
    } else if (d <= 30) {
        printf("Fine ₹%d\n", d * 6);
    } else {
        printf("Membership Cancelled\n");
    }
}