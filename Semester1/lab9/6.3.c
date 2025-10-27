#include <stdio.h>

int main() {
    printf("Name - Aditya Dabral\nSAP iD - 590029459\nCourse-BCA\nBatch-6");
    printf("\n-------------------------------------------------\n");

    int A[100];
    int N;
    int i;
    int K;
    int C = 0;
    
    printf("Enter array size (N): ");
    scanf("%d", &N);
    
    printf("Enter %d integers:\n", N);
    for (i = 0; i < N; i++) {
        scanf("%d", &A[i]);
    }
    
    printf("Enter the number (K) to find its frequency: ");
    scanf("%d", &K);
    
    for (i = 0; i < N; i++) {
        if (A[i] == K) {
            C++;
        }
    }
    
    printf("\nThe number %d appeared %d times in the list.\n", K, C);
    
    return 0;
}