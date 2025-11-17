#include <stdio.h>
int main()
{

    printf("Name - Aditya Dabral\nSAP iD - 590029459\nCourse-BCA\nBatch-6");
    printf("\n-------------------------------------------------\n");
    int num, i;
    printf("Multiplication Table Program \n");
    printf("Enter a number: ");
    scanf("%d", &num);
    printf("\nMultiplication Table of %d:\n", num);
    for (i = 1; i <= 10; i++)
    {
        printf("%d * %d = %d\n", num, i, num * i);
    }

    return 0;
}
