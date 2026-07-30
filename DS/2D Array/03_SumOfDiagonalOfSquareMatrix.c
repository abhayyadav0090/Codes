/*
Program: Sum Of Diagonal of a Square 2D Array (Matrix)
Author: Abhay Yadav
Date: 30/07/2026
*/

#include <stdio.h>

int main() {
    int ARR[10][10];
    int i, j, M, SUM=0;
    printf("Enter the ORDER of Matrix (no. of rows) (<=10): ");
    scanf("%d", &M);

    printf("Enter the %d elements of the Matrix: \n", M*M);
    for(i=0; i<M; i++){
        for(j=0; j<M; j++){
            scanf("%d", &ARR[i][j]);
        }
    }
    
    printf("Entered Matrix is : \n");
    for(int i=0; i<M; i++){
        for(int j=0; j<M; j++){
            printf("%d ", ARR[i][j]);
            if(i==j) SUM+=ARR[i][j];
        }
        printf("\n");
    }

    printf("SUM of all diagonal elements of matrix having row=%d and column=%d is SUM=%d", M, M, SUM);
    return 0;
}