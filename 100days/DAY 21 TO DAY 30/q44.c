//Q44: Write a program to find the sum of the series: 1 + 3/4 + 5/6 + 7/8 + … up to n terms.


// Aditya Dabral
// 590029459

#include <stdio.h>
void main() {
    int n;
    float sum = 0.0;

    printf("Enter the number of terms: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        int numerator = 2 * i + 1;
        int denominator = 2 * i + 2;
        sum += (float)numerator / denominator;
    }

    printf("Approximate sum: %.1f\n", sum);
}