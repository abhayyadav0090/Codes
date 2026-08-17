/*
Program: Linear Search in 1D Array
Author: Abhay Yadav
Date: 30/07/2026
*/

#include <stdio.h>
// int a; // Value in global variable is always 0 by default in place of garbage value;
int main() {
    int ARR[20]={3, 5, 7, 10, 20, 45, 78, 96, 45, 56, 89, 63, 98, 63, 95, 63, 89, 36};
    int i=0, N=18, ITEM;
    printf("Enter the ITEM to search in the array: ");
    scanf("%d", &ITEM);
    for(i=0; i<N; i++){
        if(ARR[i]==ITEM) break;
    }
    if(i==N) printf("Search UnSuccessful! %d is not found", ITEM);
    else printf("Search Successful! %d is found at %d place", ITEM, i+1);
    return 0;
}