/*
Program: Insertion Operation in Array
Author: Abhay Yadav
Date: 29/07/2026
*/

#include <stdio.h>

int main() {
    int ARR[10]={3, 5, 7, 10, 20};
    int N=5, K=0, SIZE=10, ITEM;
    if(N==SIZE) {
        printf("Overflow!! Elements can't be inserted.");
        return 0;
    }
    printf("Current Array : \n");
    for(int i=0; i<N; i++){
        printf("%d ", ARR[i]);
    }
    printf("\n");
    printf("Enter the value of ITEM to insert at Kth index: ");
    scanf("%d", &ITEM);
    printf("Enter the value of Kth index: ");
    scanf("%d", &K);
    if(K>=N){
        ARR[K-1]=ITEM;
        N=K;
    }
    else{
        for(int i=N; i>=K; i--){
            ARR[i]=ARR[i-1];
        }
        ARR[K-1]=ITEM;
        N=N+1;
    }
    printf("Updated Array : \n");
    for(int i=0; i<N; i++){
        printf("%d ", ARR[i]);
    }
    return 0;
}