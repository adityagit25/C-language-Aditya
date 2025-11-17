#include <stdio.h>

int main() {
    printf("Name - Aditya Dabral\nSAP iD - 590029459\nCourse-BCA\nBatch-6");
    printf("\n-------------------------------------------------\n");

    float A, B, C;
    
    printf("Side 1 (A): ");
    scanf("%f", &A);
    printf("Side 2 (B): ");
    scanf("%f", &B);
    printf("Side 3 (C): ");
    scanf("%f", &C);

    if (A <= 0 || B <= 0 || C <= 0) {
        printf("\nNot a triangle! Sides must be big numbers.\n");
        return 0;
    }

    
    if (A + B > C && A + C > B && B + C > A) {
        printf("\nYes! It is a triangle.\n");

     
        if (A == B && B == C) {
            printf("It is a super special Equilateral triangle (all sides are same!)\n");
            return 0;
        } 
        

        if (A == B || B == C || A == C) {
            printf("It is an Isosceles triangle (two sides are same!)\n");
            return 0;
        } 
        
     
        float R1 = A * A + B * B;
        float R2 = C * C;
        
        float R3 = B * B + C * C;
        float R4 = A * A;
        
        float R5 = A * A + C * C;
        float R6 = B * B;

        if (R1 == R2) {
            printf("It is a Right-Angled triangle!\n");
            return 0;
        }
        if (R3 == R4) {
            printf("It is a Right-Angled triangle!\n");
            return 0;
        }
        if (R5 == R6) {
            printf("It is a Right-Angled triangle!\n");
            return 0;
        }
        
   
        printf("It is a Scalene triangle (all sides are different!)\n");

    } else {
        printf("\nNo! The sides don't fit together (Invalid).\n");
    }
    
    return 0;
}