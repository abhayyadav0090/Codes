/*
Program: Value at Address
Author: Abhay Yadav
Date: 31/07/2026
*/

#include <stdio.h>

int main(){
    char i = 'A';
    char* j = &i; // j is a pointer pointing to i (j is a character pointer) 

    float k = 5.232;
    float* k1 = &k;
    printf("The address of i is %p\n", &i);
    printf("The address of i is %p or value in j\n", j);
    printf("The address of j is %p\n", &j);
    printf("The address of k is %p\n", &k);
    printf("The address of k is %p or value in k1\n", k1);
    printf("The value at address stored in j is %d or %c\n", *(&i), *(&i));

    return 0;
}