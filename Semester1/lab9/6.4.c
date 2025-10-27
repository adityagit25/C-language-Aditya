#include <stdio.h>

int main() {
    printf("Name - Aditya Dabral\nSAP iD - 590029459\nCourse-BCA\nBatch-6");
    printf("\n-------------------------------------------------\n");

    int A[10][10], B[10][10], C[10][10];
    int M, N, P, Q;
    int i, j, k;
    
    printf("Enter rows (M)  for Matrix A: ");
    scanf("%d", &M);
    printf("Enter columns (N) for Matrix A: ");
    scanf("%d", &N);
    
    printf("Enter rows (P) for Matrix B: ");
    scanf("%d", &P);
    
    printf("Enter columns (Q) for Matrix B: ");
    scanf("%d", &Q);
    
    if (N != P) {
        printf("\nIncompatibility Error: Number of columns in A (%d) must equal number of rows in B (%d).\n", N, P);
        printf("Matrix multiplication A x B is not possible.\n");
        return 1;
    }
    
    printf("\nEnter elements of Matrix A (%d x %d):\n", M, N);
    for (i = 0; i < M; i++) {
        for (j = 0; j < N; j++) {
            scanf("%d", &A[i][j]);
        }
    }
    
    printf("Enter elements of Matrix B (%d x %d):\n", P, Q);
    for (i = 0; i < P; i++) {
        for (j = 0; j < Q; j++) {
            scanf("%d", &B[i][j]);
        }
    }

    for (i = 0; i < M; i++) {
        for (j = 0; j < Q; j++) {
            C[i][j] = 0;
            for (k = 0; k < N; k++) {
                C[i][j] += A[i][k] * B[k][j];
            }
        }
    }
    
    printf("\n--- Input Matrix A (%d x %d) ---\n", M, N);
    for (i = 0; i < M; i++) {
        for (j = 0; j < N; j++) {
            printf("%4d", A[i][j]);
        }
        printf("\n");
    }
    
    printf("\n--- Input Matrix B (%d x %d) ---\n", P, Q);
    for (i = 0; i < P; i++) {
        for (j = 0; j < Q; j++) {
            printf("%4d", B[i][j]);
        }
        printf("\n");
    }

    printf("\n--- Resultant Matrix C (A x B) (%d x %d) ---\n", M, Q);
    for (i = 0; i < M; i++) {
        for (j = 0; j < Q; j++) {
            printf("%4d", C[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}