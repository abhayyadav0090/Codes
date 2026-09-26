/*
Program: Quick Sort
Author: Abhay Yadav
Date: 16/09/2026
*/

#include <stdio.h>

int Partition(int A[], int p, int r){
    int x=A[r];
    int i=p-1;

    for(int j=p; j<=(r-1); j++){
        if(A[j]<=x){
            i=i+1;
            int temp=A[j];
            A[j]=A[i];
            A[i]=temp;
        }
    }

    int temp=A[i+1];
    A[i+1]=A[r];
    A[r]=temp;
    
    return (i+1);
}

void QSort(int A[], int p, int r){
    if(p>=r) return;
    int q=Partition(A, p, r);
    QSort(A, p, q-1);
    QSort(A, q+1, r);
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

    QSort(A, 0, N-1);

    printf("The Sorted Array is: ");
    for(int i=0; i<N; i++){
        printf("%d ", A[i]);
    }
    return 0;
}

/*
OutPut:
Enter the number of Elements: 10
Enter the element 1: 5
Enter the element 2: 69
Enter the element 3: 2
Enter the element 4: 3
Enter the element 5: 1
Enter the element 6: 3
Enter the element 7: 9
Enter the element 8: 8
Enter the element 9: 4
Enter the element 10: 2
Entered Array is: 5 69 2 3 1 3 9 8 4 2 
The Sorted Array is: 1 2 2 3 3 4 5 8 9 69
*/