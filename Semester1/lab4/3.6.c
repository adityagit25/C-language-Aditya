#include <stdio.h> 
int main() { 
printf("Name - Aditya Dabral\nSAP iD - 590029459\nCourse-BCA\nBatch-6");
printf("\n-------------------------------------------------\n");
float l1, b1, l2, b2, l3, b3; 
float p1, p2, p3; 
float max; 
// Input lengths and breadths 
printf("Enter length and breadth of rectangle 1: "); 
scanf("%f %f", &l1, &b1); 
printf("Enter length and breadth of rectangle 2: "); 
scanf("%f %f", &l2, &b2); 
printf("Enter length and breadth of rectangle 3: "); 
scanf("%f %f", &l3, &b3); 
// Calculate perimeters 
p1 = 2 * (l1 + b1); 
p2 = 2 * (l2 + b2); 
p3 = 2 * (l3 + b3); 
// Find the largest perimeter using nested ternary operator 
max = (p1 > p2) ? ((p1 > p3) ? p1 : p3) : ((p2 > p3) ? p2 : p3); 
// Display result 
printf("\nPerimeter of Rectangle 1 = %.2f", p1); 
printf("\nPerimeter of Rectangle 2 = %.2f", p2); 
printf("\nPerimeter of Rectangle 3 = %.2f", p3); 
printf("\n\nThe rectangle with the highest perimeter is: "); 
(max == p1) ? printf("Rectangle 1 (%.2f)", p1) : 
(max == p2) ? printf("Rectangle 2 (%.2f)", p2) : 
printf("Rectangle 3 (%.2f)"); 
printf("\n"); 
return 0; 
}
