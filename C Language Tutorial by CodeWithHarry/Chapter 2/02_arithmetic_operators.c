/*
Program: Operators
Author: Abhay 
Date: 23/07/2026
*/

#include <stdio.h>

int main() {
    int a = 4;
    int b = 3;
    printf("Enter the value of a : ");
    scanf("%d",&a);
    printf("Enter the value of b : ");
    scanf("%d",&b);
    int c = a + b;
    printf("The value of a is %d and value of b is %d and sum is %d\n", a, b, c);
    // Modulus operator is used to get the remainder
    printf("The remainder when %d is divided by %d is %d", a, b, a%b);

    // int d = a ^ b; -> this doesn't work for exponential in C
    
    /*
    Type Conversion
        An arithmetic operation between two operands follows these rules:

        int + int → int
        Both operands are int, result is int.
        5 / 2 = 2

        int + float → float
        One operand is float, result is float.
        5.0 / 2 = 2.5

        float + float → float
        Both are float, result is float.
        5.0 / 2.0 = 2.5

    NOTE
        2 / 5 becomes 0 — both are int, fractional part is discarded.
        2 / 5 = 0
    */

    return 0;
}