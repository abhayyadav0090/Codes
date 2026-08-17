/*
Program: Tranversing the 2D Array
Author: Abhay Yadav
Date: 30/07/2026
*/

#include <stdio.h>

int main() {
    int ARR[5][5]={10, 20, 30, 40, 50, 60, 70, 80, 90, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25};
    int M=5, N=5;
    printf("Current Matrix is : \n");
    for(int i=0; i<M; i++){
        for(int j=0; j<N; j++){
            printf("%d ", ARR[i][j]);
        }
        printf("\n");
    }
    return 0;
}