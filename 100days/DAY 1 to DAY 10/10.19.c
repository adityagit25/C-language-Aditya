//Q19: Write a program to classify a triangle as Equilateral, Isosceles, or Scalene based on its side lengths.

// Aditya Dabral
// 590029459

#include <stdio.h>

void main() {
    
    int a,b,c;
    printf("Enter side lengths of the triangle: ");
    scanf("%d %d %d", &a, &b, &c);
    
    if (a <= 0 || b <= 0 || c <= 0) {
        printf("Invalid side lengths\n");
    } else if (a == b && b == c) {
        printf("Equilateral\n");
    } else if (a == b || b == c || a == c) {
        printf("Isosceles\n");
    } else {
        printf("Scalene\n");
    }

}