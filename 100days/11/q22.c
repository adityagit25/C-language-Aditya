//Q22: Write a program to find profit or loss percentage given cost price and selling price.


// Aditya Dabral
// 590029459

#include <stdio.h>

void main() {

    float cp,sp,p,l,pp,lp;
    printf("Enter cost price: ");
    scanf("%f", &cp);
    printf("Enter selling price: ");
    scanf("%f", &sp);

    if (sp > cp) {
        p = sp - cp;
        pp = (p / cp) * 100;
        printf("Profit %f%%\n", pp);
    } else if (cp > sp) {
        l = cp - sp;
        lp = (l / cp) * 100;
        printf("Loss %f%%\n", lp);
    } else {
        printf("No Profit No Loss\n");
    }

}