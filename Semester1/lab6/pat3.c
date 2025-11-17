#include <stdio.h>
int main()
{
    printf("Name - Aditya Dabral\nSAP iD - 590029459\nCourse-BCA\nBatch-6");
    printf("\n-------------------------------------------------\n");

    int i, j, a, b = 1;
    printf("\nEnter the value:");
    scanf("%d", &a);
    for (i = 1; i <= a; i++)
    {
        printf("\n");
        for (j = 1; j <= i; j++)
        {
            printf(" %d", b);
            b++;
        }
    }
    return 0;
}