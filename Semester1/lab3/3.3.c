#include <stdio.h>

int main() {
    printf("Name - Aditya Dabral\nSAP iD - 590029459\nCourse-BCA\nBatch-6");
    printf("\n-------------------------------------------------\n");

    float W, H, B;
    
    printf("Your Weight (W) in kilograms: ");
    scanf("%f", &W);
    printf("Your Height (H) in meters: ");
    scanf("%f", &H);
    
     
    B = W / (H * H);
    
    printf("\nYour BMI number (B) is: %.2f\n", B);
    
 
    
    if (B < 15.0) {
        printf("You are in the Starvation group.\n");
    }
    
    if (B >= 15.1 && B <= 17.5) {
        printf("You are Anorexic.\n");
    }
    
    if (B >= 17.6 && B <= 18.5) {
        printf("You are Underweight.\n");
    }
    
    if (B >= 18.6 && B <= 24.9) {
        printf("You are Ideal weight.\n");
    }
    
    if (B >= 25.0 && B <= 25.9) {
        printf("You are Overweight.\n");
    }
    
    if (B >= 30.0 && B <= 39.9) {
        printf("You are Obese.\n");
    }
    
    if (B >= 40.0) {
        printf("You are Morbidly Obese.\n");
    }
    else{
        printf("not charted")
    }
      
    return 0;
}