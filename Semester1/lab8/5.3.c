#include <stdio.h>

int main() {
    printf("Name - Aditya Dabral\nSAP iD - 590029459\nCourse-BCA\nBatch-6");
    printf("\n-------------------------------------------------\n");
    
    int A = 100;
    
    {
        int B = 200;
        
        printf("Inside block, A is: %d\n", A);
        
        printf("Inside block, B is: %d\n", B);
        
    }
    
    printf("Outside block, A is: %d\n", A);

    
    return 0;
}