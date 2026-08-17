/*
Program: Binary Search In 1D Array
Author: Abhay Yadav
Date: 30/07/2026
*/

#include <stdio.h>

int main() {
    int ARR[20]={3, 5, 7, 10, 20, 45, 78, 96, 45, 56, 89, 63, 98, 63, 95, 63, 89, 36};
    int N=18, ITEM, SI=0, EI=17, MI;
    printf("Enter the ITEM to search in the array: ");
    scanf("%d", &ITEM);
    MI = (int)((SI+EI)/2);
    while((SI<=EI)&&(ARR[MI]!=ITEM)){
        if(ARR[MI]<ITEM) SI=MI+1;
        else EI=MI-1;
        MI = (int)((SI+EI)/2);
    }
    if(ARR[MI]==ITEM) printf("Search Successful! %d has been found", ITEM);
    else printf("Search UnSuccessful! %d has not been found", ITEM);
    return 0;
}