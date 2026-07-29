/*
Program: Tranversing array
Author: Abhay Yadav
Date: 29/07/2026
*/

#include <stdio.h>

int main() {
    int Arr[10]={0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    for(int i=0; i<10; i++){
        if(i==0) printf("Element at %drst place is %d\n", i+1, Arr[i]);
        else if(i==1) printf("Element at %dnd place is %d\n", i+1, Arr[i]);
        else if(i==2) printf("Element at %drd place is %d\n", i+1, Arr[i]);
        else if(i>=3) printf("Element at %dth place is %d\n", i+1, Arr[i]);
    }
    return 0;
}