#include <stdio.h>

int main()
{
    printf("Name - Aditya Dabral\nSAP iD - 590029459\nCourse-BCA\nBatch-6");
    printf("\n-------------------------------------------------\n");
    double c = 100000.0;
    double r = 0.10; // 10%

    printf("Population at the end of each year in the last decade:\n");

    for (int year = 1; year <= 10; year++)
    {
        c = c * (1 + r);
        printf("Year %d: %.0f\n", year, c);
    }

    return 0;
}