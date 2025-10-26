#include <stdio.h>
#include <math.h>

int main() {
    printf("Name - Aditya Dabral\nSAP iD - 590029459\nCourse-BCA\nBatch-6");
    printf("\n-------------------------------------------------\n");
    int limit;
     printf("\nEnter the limit");
    scanf("%d", &limit);
    printf("Finding Ramanujan numbers up to %d:\n", limit);
    
    // Iterate through all possible pairs of cubes (i, j)
    for (int i = 1; i < cbrt(limit); i++) {
        for (int j = i + 1; j < cbrt(limit); j++) {
            int sum = i * i * i + j * j * j;
            
            // Check if the sum is within the limit
            if (sum > limit) {
                break;
            }
            
            // Now, find another pair (k, l) that gives the same sum
            for (int k = i + 1; k < cbrt(limit); k++) {
                for (int l = k + 1; l < cbrt(limit); l++) {
                    int sum2 = k * k * k + l * l * l;
                    if (sum2 > limit) {
                        break;
                    }
                    
                    // Check if the sums are equal and the pairs are different
                    if (sum == sum2 && (i != k || j != l)) {
                        printf("%d = %d^3 + %d^3 = %d^3 + %d^3\n", sum, i, j, k, l);
                    }
                }
            }
        }
    }
    
    return 0;
}