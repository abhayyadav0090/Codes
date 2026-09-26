/*
Program: Radix Sort
Author: Abhay Yadav
Date: 23/09/2026
*/

#include <stdio.h>

// Utility function to get maximum value in array
int getMax(int A[], int n) {
    int max = A[0];
    for(int i=1; i<n; i++) {
        if(A[i] > max) max = A[i];
    }
    return max;
}

// Counting Sort used as a subroutine for Radix Sort
void CountSort(int A[], int n, int exp) {
    int output[n];   // temporary array
    int count[10] = {0};

    // Count occurrences of digits
    for(int i=0; i<n; i++)
        count[(A[i]/exp)%10]++;

    // Convert count[] to cumulative count
    for(int i=1; i<10; i++)
        count[i] += count[i-1];

    // Build output array (stable sorting)
    for(int i=n-1; i>=0; i--) {
        int digit = (A[i]/exp)%10;
        output[count[digit]-1] = A[i];
        count[digit]--;
    }

    // Copy back to original array
    for(int i=0; i<n; i++)
        A[i] = output[i];
}

// Radix Sort main function
void RSort(int A[], int n) {
    int max = getMax(A, n);

    // Apply counting sort for each digit place
    for(int exp=1; max/exp > 0; exp *= 10)
        CountSort(A, n, exp);
}

int main() {
    int N, A[100];
    printf("Enter the number of Elements: ");
    scanf("%d", &N);

    for(int i=0; i<N; i++) {
        printf("Enter the element %d: ", i+1);
        scanf("%d", &A[i]);
    }

    printf("Entered Array is: ");
    for(int i=0; i<N; i++) {
        printf("%d ", A[i]);
    }
    printf("\n");

    RSort(A, N);

    printf("The Sorted Array is: ");
    for(int i=0; i<N; i++) {
        printf("%d ", A[i]);
    }
    return 0;
}
