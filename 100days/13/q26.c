//Q26: Write a program to print numbers from 1 to n.

// Aditya Dabral
// 590029459
#include <stdio.h>

void main() {
    int n, i;

    printf("Enter a number: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        printf("%d ", i);
    }
    printf("\n");
}