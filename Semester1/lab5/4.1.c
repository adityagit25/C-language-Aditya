#include <stdio.h>

int main() {
    int num;
    int p = 0, n = 0, z = 0;
    char c;
    printf("Name - Aditya Dabral\nSAP iD - 590029459\nCourse-BCA\nBatch-6");
    printf("\n-------------------------------------------------\n");
    printf("Count Positive, Negative, and Zero Numbers\n");
    do {
        printf("\nEnter a number: ");
        scanf("%d", &num);
        if (num > 0)
            p++;
        else if (num < 0)
            n++;
        else
            z++;
        printf("Do you want to enter another number? (y/n): \n");
        scanf(" %c", &c); 
    } while (c == 'y' || c == 'Y');
    printf("Results");
    printf("Positive numbers: %d\n", p);
    printf("Negative numbers: %d\n", n);
    printf("Zeroes: %d\n", z);

    return 0;
}
