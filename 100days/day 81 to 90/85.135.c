/* Q135: Assign explicit values starting from 10 and print them.

/*
Sample Test Cases:
Input 1:
No input
Output 1:
A=10
B=11
C=12

*/
#include <stdio.h>


enum Letters { A = 10, B, C }; // B = 11, C = 12 

int main() {
    printf("Name -Aditya \nSAP ID - 590029459\nCourse - BCA \nBatch-B6");
	printf("\n----------------------------------------------------------------\n");

    
    printf("A = %d\n", A);
    printf("B = %d\n", B);
    printf("C = %d\n", C);

    return 0;
}
