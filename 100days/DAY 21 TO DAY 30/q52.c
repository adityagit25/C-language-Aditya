/*
Q52: Write a program to print the following pattern:

*

*
*
*

*
*
*
*
*

*
*
*

*



// Aditya Dabral
// 590029459
*/

#include <stdio.h>
void main() {
    int rows = 5;

    for (int i = 1; i <= rows; i++) {
        for (int j = 1; j <= i; j++) {
            printf("*\n");
        }
        printf("\n");
    }
}