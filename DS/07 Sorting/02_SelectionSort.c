/*
Program: Bubble Sorting
Author: Abhay Yadav
Date: 16/09/2026
*/

#include <stdio.h>

void SSort(int A[], int N){
    for(int i=0; i<(N-1); i++){
        int MIN=A[i];
        int j=i+1;
        int LOC;
        while(j<=N-1){
            if (MIN>A[j]){
                MIN=A[j];
                LOC=j;
            }
            j=j+1;
        }
        int temp=A[LOC];
        A[LOC]=A[i];
        A[i]=temp;

    }
    printf("The Sorted Array is: ");
    for(int i=0; i<N; i++){
        printf("%d ", A[i]);
    }
}

int main() {
    int N, A[100];
    printf("Enter the number of Elements: ");
    scanf("%d", &N);
    for(int i=0; i<N; i++){
        printf("Enter the element %d: ", i+1);
        scanf("%d", &A[i]);
    }
    SSort(A, N);
    return 0;
}