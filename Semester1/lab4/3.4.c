#include <stdio.h> 
int main() { 
double x1, y1, x2, y2, x3, y3; 
printf("Name - Aditya Dabral\nSAP iD - 590029459\nCourse-BCA\nBatch-6");
printf("\n-------------------------------------------------\n");
printf("Enter coordinates of point 1 (x1 y1): "); 
scanf("%lf %lf", &x1, &y1); 
printf("Enter coordinates of point 2 (x2 y2): "); 
scanf("%lf %lf", &x2, &y2); 
printf("Enter coordinates of point 3 (x3 y3): "); 
scanf("%lf %lf", &x3, &y3); 
double area = (1/2)*(x1 * (y2 - y3) + x2 * (y3 - y1) + x3 * (y1 - y2)); 
if (area == 0) { 
printf("The points are collinear.\n"); 
} else { 
printf("The points are not collinear.\n"); 
} 
return 0; 
}
