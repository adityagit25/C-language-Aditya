#include <stdio.h>
int main()
{
    printf("Name - Aditya Dabral\nSAP iD - 590029459\nCourse-BCA\nBatch-6");
    printf("\n-------------------------------------------------\n");

    int i, j, n;
    printf("\nEnter the value:");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        printf("\n");
        for (j = i; j <= n; j++)
        {
            printf("%d", j);
        }
    }
    return 0;
}