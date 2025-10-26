 #include <stdio.h> 
int main() { 
printf("Name - Aditya Dabral\nSAP iD - 590029459\nCourse-BCA\nBatch-6");
printf("\n-------------------------------------------------\n");
int year, leap_years, normal_years, total_days, day; 
printf("Enter a year: "); 
scanf("%d", &year); 
// Calculate number of leap years before the given year 
leap_years = (year - 1) / 4 - (year - 1) / 100 + (year - 1) / 400; 
normal_years = (year - 1) - leap_years; 
// Total days passed before this year 
total_days = (leap_years * 366) + (normal_years * 365); 
// Day of week: 0-Monday, 1-Tuesday, ..., 6-Sunday 
day = total_days % 7; 
printf("On 1st January %d, it was ", year); 
switch(day) { 
case 0: printf("Monday"); break; 
case 1: printf("Tuesday"); break; 
case 2: printf("Wednesday"); break; 
case 3: printf("Thursday"); break; 
case 4: printf("Friday"); break; 
case 5: printf("Saturday"); break; 
case 6: printf("Sunday"); break; 
} 
printf(".\n"); 
return 0; 
}
