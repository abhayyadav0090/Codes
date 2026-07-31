/*
Program: Pointer to Pointer
Author: Abhay Yadav
Date: 31/07/2026
*/

#include <stdio.h>

int main(){
    int i = 6;
    int* j = &i;
    int** k = &j;

    printf("The value of i is %d through i\n", i);
    printf("The value of i is %d through *j\n", *j);
    printf("The value of i is %d through *(&i)\n", *(&i));
    printf("The value of i is %d through **(&j)\n", **(&j));

    return 0;
}