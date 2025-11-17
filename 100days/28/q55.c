//Q55: Write a program to print all the prime numbers from 1 to n.


// Aditya Dabral
// 590029459

#include <stdio.h>
int main()
{
    int i, j, n, isPrime;
    printf("Enter a number: ");
    scanf("%d", &n);
    printf("Prime numbers from 1 to %d are: ", n);
    for (i = 2; i <= n; i++)
    {
        isPrime = 1;
        for (j = 2; j <= i / 2; j++)
        {
            if (i % j == 0)
            {
                isPrime = 0;
                break;
            }
        }
        if (isPrime)
        {
            printf("%d ", i);
        }
    }
    return 0;
}