/*
Program: Problem 01
Author: Abhay Yadav
Date: 31/07/2026
*/

#include <stdio.h>

int main(){
    int i = 2;
    int* ptr = &i;
    printf("The address of i is %u\n", &i);
    printf("The value of i is %d\n", *ptr);
    return 0;
}