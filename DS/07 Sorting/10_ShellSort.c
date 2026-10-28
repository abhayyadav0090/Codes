/*
Program: Shell Sort
Author: Abhay Yadav
Date: 30/09/2026
*/

#include <stdio.h>

void ShellSort(int A[], int n) {
    // Start with a big gap, then reduce it
    for(int gap = n/2; gap > 0; gap /= 2) {
        // Do a gapped insertion sort
        for(int i = gap; i < n; i++) {
            int temp = A[i];
            int j;
            for(j = i; j >= gap && A[j-gap] > temp; j -= gap) {
                A[j] = A[j-gap];
            }
            A[j] = temp;
        }
    }
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
    for(int i=0; i<N; i++) {
        printf("%d ", A[i]);
    }
    printf("\n");

    ShellSort(A, N);

    printf("The Sorted Array is: ");
    for(int i=0; i<N; i++) {
        printf("%d ", A[i]);
    }
    printf("\n");

    return 0;
}
