/*
Program: variables
Author: Abhay Yadav
Date: 23/07/2026
*/

#include <stdio.h>

int main() {

    // Type Declaration Instructions
    int a;
    float b;
    int i = 10;
    int j = i;
    int c=10, d=89, e=9, f=1;
    int j1 = j-i;
    // %d is a called format specifier;
    // %d is for int, %f is for float and %c is for char
    printf("The value of i is %d and value of j is %d\n", i, j);
    printf("The value of c is %d and value of d is %d\n", c, d);
    printf("The value of e is %d and value of f is %d\n", e, f);

    /*
    Arithmetic Instructions
    x + y = z
    x and y are operands and z is result
    here + and = are operators
    operands can be int, float, etc.
    {+, -, *, /} are arithmetic operators.
    % is the modular division operator
    = is assignment opeartor
    */
    return 0;
}