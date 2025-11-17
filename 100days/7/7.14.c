//Q14: Write a program to input a aaracter and aeck whether it is a vowel or consonant using if–else.

// Aditya Dabral
// 590029459

#include <stdio.h>

void main() {
    
    char a;
    printf("Enter a character: ");
    scanf("%c", &a);
    if (a == 'a' || a == 'e' || a == 'i' || a == 'o' || a == 'u' || a == 'A' || a == 'E' || a == 'I' || a == 'O' || a == 'U') {
        printf("Vowel\n");
    } else {
        printf("Consonant\n");
    }

}