#include <stdio.h>

void sort(int *A, int N) {
    int i, j, T;
    for (i = 0; i < N - 1; i++) {
        for (j = 0; j < N - i - 1; j++) {
            if (A[j] > A[j + 1]) {
                T = A[j];
                A[j] = A[j + 1];
                A[j + 1] = T;
            }
        }
    }
}

int main() {
    printf("Name - Aditya Dabral\nSAP iD - 590029459\nCourse-BCA\nBatch-6");
    printf("\n-------------------------------------------------\n");

    int A[100];
    int N;
    int i;
    
    printf("Enter array size (N): ");
    scanf("%d", &N);
    
    if (N < 2) {
        printf("Need at least 2 numbers.\n");
        return 1;
    }
    
    printf("Enter %d integers:\n", N);
    for (i = 0; i < N; i++) {
        scanf("%d", &A[i]);
    }
    
    sort(A, N);
    
    printf("\nList of integers:\n");
    for (i = 0; i < N; i++) {
        printf("%d ", A[i]);
    }
    printf("\n");
    
    printf("The second largest integer is: %d\n", A[N - 2]);
    
    return 0;
}