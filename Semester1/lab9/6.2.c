#include <stdio.h>

int main() {
    printf("Name - Aditya Dabral\nSAP iD - 590029459\nCourse-BCA\nBatch-6");
    printf("\n-------------------------------------------------\n");

    int A[100];
    int N;
    int i;
    int P = 0;
    int Neg = 0;
    int E = 0;
    int O = 0;
    
    printf("Enter array size (N): ");
    scanf("%d", &N);
    
    printf("Enter %d integers:\n", N);
    for (i = 0; i < N; i++) {
        scanf("%d", &A[i]);
    }
    
    for (i = 0; i < N; i++) {
        int V = A[i];
        
        if (V > 0) {
            P++;
        } else if (V < 0) {
            Neg++;
        }
        
        if (V != 0) {
            if (V % 2 == 0) {
                E++;
            } else {
                O++;
            }
        }
    }
    
    printf("\nStatistics:\n");
    printf("Positive numbers: %d\n", P);
    printf("Negative numbers: %d\n", Neg);
    printf("Odd numbers: %d\n", O);
    printf("Even numbers (excluding zero): %d\n", E);
    
    return 0;
}