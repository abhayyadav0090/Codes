/*
Program: Bubble Sorting
Author: Abhay Yadav
Date: 16/09/2026
*/

#include <stdio.h>

void BSort(int A[], int N){
    for(int i=0; i<=(N-1); i++){
        int ptr=0;
        while(ptr<=N-2){
            if (A[ptr]>A[ptr+1]){
                int temp=A[ptr];
                A[ptr]=A[ptr+1];
                A[ptr+1]=temp;
            }
            ptr=ptr+1;
        }
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
    BSort(A, N);
    return 0;
}

/*
OutPut:
Enter the number of Elements: 5
Enter the element 1: 3 
Enter the element 2: 6
Enter the element 3: 2
Enter the element 4: 1
Enter the element 5: 3
The Sorted Array is: 1 2 3 3 6 
*/