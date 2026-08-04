/*
Program 01: Write a C program to print the sum of two numbers using function.
Author: Abhay Yadav
Date: 04/08/2026
*/

#include <stdio.h>

// Function prototype
int sum(int, int);


// Function definition
int sum(int x, int y){
    // printf("The sum is %d\n", x+y);
    return x+y;
}

int main(){
    int a = 1;
    int b = 2;

    // int c = a + b;
    // printf("The sum is %d\n", c);
    int c  = sum(a,b); // Function call
    printf("Sum of %d and %d is %d\n", a, b, c);

    int a1 = 12;
    int b1 = 23;

    // int c1 = a1 + b1;
    // printf("The sum is %d\n", c1);
    int c1 = sum(a1,b1); // Function call
    printf("Sum of %d and %d is %d\n", a1, b1, c1);

    int a2 = 2;
    int b2 = 27;

    // int c2 = a2 + b2;
    // printf("The sum is %d\n", c2);
    int c2 = sum(a2, b2); // Function call
    printf("Sum of %d and %d is %d\n", a2, b2, c2);

    return 0;
}