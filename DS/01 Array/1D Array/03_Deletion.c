/*
Program: Delete a element from 1D Array
Author: Abhay Yadav
Date: 30/07/2026
*/

#include <stdio.h>

int main() {
    int Arr[10]={1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int N=10;
    int K;
    printf("Current Array: ");
    for(int i=0; i<N; i++){
        printf("%d ", Arr[i]);
    }
    printf("\n");
    printf("Enter value of index to delete: ");
    scanf("%d", &K);
    K=K-1; // in C Array index is from 0;
    for(int i=K; i<N; i++){
        Arr[i]=Arr[i+1];
    }
    N=N-1;
    printf("Updated Array: ");
    for(int i=0; i<N; i++){
        printf("%d ", Arr[i]);
    }
    return 0;
}