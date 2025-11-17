#include <stdio.h>

int G = 10;

void f1() {
    printf("F1 sees G as: %d\n", G);
}

void f2() {
    G = 50;
    printf("F2 changes G to: %d\n", G);
}

int main() {
    printf("Name - Aditya Dabral\nSAP iD - 590029459\nCourse-BCA\nBatch-6");
    printf("\n-------------------------------------------------\n");

    printf("Main initial G: %d\n", G);
    
    f1();
    f2();
    
    printf("Main final G: %d\n", G);
    
    return 0;
}