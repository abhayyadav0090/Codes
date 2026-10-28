/*
Program: Counting Sort
Author: Abhay Yadav
Date: 30/09/2026
*/

#include <stdio.h>
#include <limits.h>

void CountSort(int A[], int n) {
    int max = A[0], min = A[0];

    // Find range (handles negatives too)
    for(int i=1; i<n; i++) {
        if(A[i] > max) max = A[i];
        if(A[i] < min) min = A[i];
    }

    int range = max - min + 1;
    int count[range];
    int output[n];

    // Initialize count array
    for(int i=0; i<range; i++) count[i] = 0;

    // Count occurrences
    for(int i=0; i<n; i++) count[A[i] - min]++;

    // Cumulative count
    for(int i=1; i<range; i++) count[i] += count[i-1];

    // Build output (stable)
    for(int i=n-1; i>=0; i--) {
        output[count[A[i] - min] - 1] = A[i];
        count[A[i] - min]--;
    }

    // Copy back
    for(int i=0; i<n; i++) A[i] = output[i];
}

int main() {
    int N, A[100];
    printf("Enter the number of Elements: ");
    scanf("%d", &N);

    for(int i=0; i<N; i++) {
        printf("Enter element %d: ", i+1);
        scanf("%d", &A[i]);
    }

    printf("Entered Array is: ");
    for(int i=0; i<N; i++) printf("%d ", A[i]);
    printf("\n");

    CountSort(A, N);

    printf("The Sorted Array is: ");
    for(int i=0; i<N; i++) printf("%d ", A[i]);
    printf("\n");

    return 0;
}