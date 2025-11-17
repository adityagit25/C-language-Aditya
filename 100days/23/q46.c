/*Q46: Write a program to print the following pattern:
*****
*****
*****
*****
*****

/*

// Aditya Dabral
// 590029459

#include <stdio.h>
void main() {
    int rows = 5, cols = 5;

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("*");
        }
        printf("\n");
    }
}