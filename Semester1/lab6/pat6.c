#include <stdio.h>
int main()
{
    printf("Name - Aditya Dabral\nSAP iD - 590029459\nCourse-BCA\nBatch-6");
    printf("\n-------------------------------------------------\n");

    int i, j, a;
    printf("\nEnter the value:");
    scanf("%d", &a);
    for (i = 1; i <= a; i++)
    {
        printf("\n");
        for (j = a - i + 1; j > 0; j--)
        {
            printf("%d", j);
        }
    }
    return 0;
}