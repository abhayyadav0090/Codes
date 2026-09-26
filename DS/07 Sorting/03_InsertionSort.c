/*
Program: Insertion Sorting
Author: Abhay Yadav
Date: 16/09/2026
*/

#include <stdio.h>

void ISort(int A[], int N){
    for(int i=1; i<=(N-1); i++){
        int item=A[i];
        int j=i-1;
        while((j>=0)&&(A[j]>item)){
            A[j+1]=A[j];
            j=j-1;
        }
        A[j+1]=item;
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
    printf("Entered Array is: ");
    for(int i=0; i<N; i++){
        printf("%d ", A[i]);
    }
    printf("\n");
    ISort(A, N);
    return 0;
}

/*
OutPut:
Enter the number of Elements: 5
Enter the element 1: 3 
Enter the element 2: 6
Enter the element 3: 9
Enter the element 4: 2
Enter the element 5: 1
Entered Array is: 3 6 9 2 1 
The Sorted Array is: 1 2 3 6 9
*/