#include <stdio.h>

int G = 99;

void f() {
    int L = 1234;
    
    printf("Inside f, G is: %d\n", G);
    
    printf("Inside f, L is: %d\n", L);
}

int main() {
    printf("Name - Aditya Dabral\nSAP iD - 590029459\nCourse-BCA\nBatch-6");
    printf("\n-------------------------------------------------\n");
    
    printf("Inside main, G is: %d\n", G);

    f();
    
    return 0;
}