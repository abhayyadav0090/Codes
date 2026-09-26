/*
Program: Merge Sort
Author: Abhay Yadav
Date: 16/09/2026
*/

#include <stdio.h>
#include <math.h>
#include <limits.h>

void Merge(int A[], int p, int q, int r){
    int n1=q-p+1;
    int n2=r-q;
    int i, j, k;

    // Dynamically allocate two arrays L & R of size (n1+1) and size (n2+1)
    // 1 extra block for positive infinity

    int L[n1+1], R[n2+1];

    for(i=0; i<n1; i++) L[i]=A[p+i];
    for(j=0; j<n2; j++) R[j]=A[q+j+1];

    L[n1] = INT_MAX;   // from <math.h> // in 0-based index
    R[n2] = INT_MAX;   // n2 means at n2+1 place

    i=0; j=0;

    for(k=p; k<=r; k++){
        if(L[i]<R[j]){
            A[k]=L[i];
            i++;
        }
        else {
            A[k]=R[j];
            j++;
        }
    }
}

void MSort(int A[], int p, int r){
    if(p>=r) return;
    int q = (p+r)/2;
    MSort(A, p, q);
    MSort(A, q+1, r);
    Merge(A, p, q, r);
}

int main() {
    int N, A[100];
    printf("Enter the number of Elements: ");
    scanf("%d", &N);
    for(int i=0; i<N; i++){
        printf("Enter the element %d: ", i+1);
        scanf("%d", &A[i]);
    }

    printf("Entered Array is: ");
    for(int i=0; i<N; i++){
        printf("%d ", A[i]);
    }

    printf("\n");

    MSort(A, 0, N-1);

    printf("The Sorted Array is: ");
    for(int i=0; i<N; i++){
        printf("%d ", A[i]);
    }
    return 0;
}

/*
OutPut:
Enter the number of Elements: 10
Enter the element 1: 4
Enter the element 2: 5
Enter the element 3: 6
Enter the element 4: 7
Enter the element 5: 8
Enter the element 6: 9
Enter the element 7: 45
Enter the element 8: 4
Enter the element 9: 2
Enter the element 10: 1
Entered Array is: 4 5 6 7 8 9 45 4 2 1 
The Sorted Array is: 1 2 4 4 5 6 7 8 9 45 
*/

/*
🛠 Fixes You Made
Corrected subarray indexing in Merge
Left half: L[i] = A[p+i
Right half: R[j] = A[q+1+j]
Added sentinel values properly:
Used INT_MAX (from <limits.h>) instead of INFINITY for integer arrays.
Fixed recursive calls in MSort:
Changed from MSort(A, p, q-1) to MSort(A, p, q)
Right half stays MSort(A, q+1, r)
Removed unnecessary floor:
(p+r)/2 already gives integer division in C.
Ensured correct merge loop:
Compared L[i] and R[j] until one side exhausted, sentinel handled the rest.
Handled duplicates and large numbers correctly:
Your final run showed stable sorting even with repeated values and very large integers.

📘 New Things You Learned
Sentinel technique in Merge Sort:  
Adding an extra slot with “positive infinity” (INT_MAX) simplifies merging by avoiding boundary checks.
Difference between INFINITY and INT_MAX:
INFINITY → for floating‑point (float, double).
INT_MAX → for integer arrays.
Indexing discipline:  
Arrays in C are 0‑based, so careful offsets (p+i, q+1+j) are crucial.
Recursive structure of Merge Sort:  
Always split into two halves: p...q and q+1...r.
Integer division in C:  
(p+r)/2 is enough; floor is redundant.
Algorithm clarity:  
Merge Sort ≠ Quick Sort. You saw how mixing Partition logic was wrong, and why Merge Sort relies on merging sorted halves.
Practical debugging:  
Running with large, messy input helped confirm correctness and robustness of your implementation.
*/