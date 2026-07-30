/*
Program: Linear Search in 2D Array
Author: Abhay Yadav
Date: 30/07/2026
*/

#include <stdio.h>

int main() {
    int ARR[5][5]={10, 20, 30, 40, 50, 60, 70, 80, 90, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25};
    int i, j, M=5, N=5, ITEM, found=0;
    printf("Enter the ITEM to search in the array: ");
    scanf("%d", &ITEM);
    for(i=0; i<M; i++){
        for(j=0; j<N; j++){
            if(ARR[i][j]==ITEM) {
                found=1;
                break;
            }
        }
        if(ARR[i][j]==ITEM) {
            found=1;
            break;
        }
    }
    if(found==0) printf("Search UnSuccessful! %d is not found", ITEM);
    else printf("Search Successful! %d is found in row=%d and column=%d", ITEM, i+1, j+1);
    return 0;
}