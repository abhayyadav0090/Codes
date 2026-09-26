/*
Program: Heap Sort
Author: Abhay Yadav
Date: 23/09/2026
*/

#include <stdio.h>
#include <math.h>
int A_Heap_Size;

void Max_Heapify(int A[], int i){
    int l=2*i+1;
    int r=2*i+2;
    int largest;
    if(l<=A_Heap_Size && A[l]>A[i]) largest=l;
    else largest=i;
    if(r<=A_Heap_Size && A[r]>A[largest]) largest=r;
    if(largest!=i){
        int temp = A[largest];
        A[largest]=A[i];
        A[i]=temp;
        Max_Heapify(A, largest);
    }
}

void Build_Max_Heap(int A[]){
    // A_Heap_Size=N in main();
    for(int i=floor(A_Heap_Size/2); i>=0; i--){
        Max_Heapify(A, i);
    }
}

void HeapSort(int A[]){
    Build_Max_Heap(A);
    for(int i=A_Heap_Size; i>=1; i--){
        int temp=A[0];
        A[0]=A[i];
        A[i]=temp;
        A_Heap_Size--;
        Max_Heapify(A, 0);
    }
}

int main() {
    int N, A[100];
    printf("Enter the number of Elements: ");
    scanf("%d", &N);
    A_Heap_Size=N;
    for(int i=0; i<N; i++){
        printf("Enter the element %d: ", i+1);
        scanf("%d", &A[i]);
    }

    printf("Entered Array is: ");
    for(int i=0; i<N; i++){
        printf("%d ", A[i]);
    }

    printf("\n");

    HeapSort(A);

    printf("The Sorted Array is: ");
    for(int i=0; i<N; i++){
        printf("%d ", A[i]);
    }
    return 0;
}

/*
Output:
Enter the number of Elements: 5
Enter the element 1: 3
Enter the element 2: 6
Enter the element 3: 9
Enter the element 4: 8
Enter the element 5: 5
Entered Array is: 3 6 9 8 5 
The Sorted Array is: 1 3 5 6 8 
*/

/*
🎯 Key Fixes: 
Correct loop conditions (>= instead of <=).
Use 0-based indexing consistently.
Pass heap_size as a parameter instead of relying on a global.
*/