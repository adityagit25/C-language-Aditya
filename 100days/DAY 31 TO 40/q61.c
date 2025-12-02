//Q61: Search for an element in an array using linear search.

// Aditya Dabral
// 590029459

#include <stdio.h>



void main(){
    int n, i, arr[100], target, found = -1;
    printf("Enter number of elements in the array: ");
    scanf("%d", &n);
    printf("Enter %d elements: ", n);
    for(i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }
    printf("Enter the element to search: ");
    scanf("%d", &target);
    for(i = 0; i < n; i++){
        if(arr[i] == target){
            found = i;
            break;
        }
    }
    if(found != -1){
        printf("Found at index %d\n", found);
    } else {
        printf("-1\n");
    }
}