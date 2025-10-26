#include <stdio.h>

void visit() {
    int R = 0;
    
    static int P = 0;
    
    R++;
    P++;
    
    printf("Call %d:\n", P);
    printf(" - Normal (R): %d\n", R);
    printf(" - Static (P): %d\n", P);
    printf("\n");
}

int main() {
    printf("Name - Aditya Dabral\nSAP iD - 590029459\nCourse-BCA\nBatch-6");
    printf("\n-------------------------------------------------\n");
    
    visit();
    visit();
    visit();
    
    return 0;
}