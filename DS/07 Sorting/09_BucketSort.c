/*
Program: Bucket Sort
Author: Abhay Yadav
Date: 30/09/2026
*/

#include <stdio.h>

// Insertion Sort for sorting individual buckets
void InsertionSort(float arr[], int n) {
    for(int i=1; i<n; i++) {
        float key = arr[i];
        int j = i-1;
        while(j >= 0 && arr[j] > key) {
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = key;
    }
}

void BucketSort(float A[], int n) {
    // Create n empty buckets
    float buckets[n][n];   // each bucket can hold up to n elements
    int count[n];          // track number of elements in each bucket

    for(int i=0; i<n; i++) count[i] = 0;

    // Put array elements into buckets
    for(int i=0; i<n; i++) {
        int bi = (int)(n * A[i]);  // bucket index
        buckets[bi][count[bi]++] = A[i];
    }

    // Sort each bucket
    for(int i=0; i<n; i++) {
        if(count[i] > 0) {
            InsertionSort(buckets[i], count[i]);
        }
    }

    // Concatenate all buckets into A[]
    int idx = 0;
    for(int i=0; i<n; i++) {
        for(int j=0; j<count[i]; j++) {
            A[idx++] = buckets[i][j];
        }
    }
}

int main() {
    int N;
    float A[100];   // Bucket Sort usually works on floats in [0,1)

    printf("Enter the number of Elements: ");
    scanf("%d", &N);

    for(int i=0; i<N; i++) {
        printf("Enter element %d (between 0 and 1): ", i+1);
        scanf("%f", &A[i]);
    }

    printf("Entered Array is: ");
    for(int i=0; i<N; i++) printf("%.2f ", A[i]);
    printf("\n");

    BucketSort(A, N);

    printf("The Sorted Array is: ");
    for(int i=0; i<N; i++) printf("%.2f ", A[i]);
    printf("\n");

    return 0;
}