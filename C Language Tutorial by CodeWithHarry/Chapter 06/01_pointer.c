/*
Program: Pointers Intro
Author: Abhay Yadav
Date: 31/07/2026
*/

#include <stdio.h>

int main(){
    int i = 72;
    int* j = &i; // j is a pointer pointing to i (j is an integer pointer)
    int k = 67;
    printf("The address of i is %p\n", &i);
    printf("The address of i is %p stored inside j\n", j);
    printf("The address of j is %p\n", &j);
    printf("The address of k is %p\n", &k);

    printf("The value at address j is %d\n", *(&i));

    return 0;
}
/*
The address of i is 0061FF1C
The address of i is 0061FF1C stored inside j
The address of j is 0061FF18
The address of k is 0061FF14
The value at address j is 72
*/