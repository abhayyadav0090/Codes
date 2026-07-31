/*
Program: Question- 01
Author: Abhay Yadav
Date: 24/07/2026
*/

/*
1. Which of the following is invalid in C?
a. int a = 1; int b = a;
b. int v = 3*3;
c. char dt = '21 dec 2020'; -> Invalid
*/

#include <stdio.h>

int main() {
    int a = 1;                      // valid
    int b = a;                      // Valid
    int v = 3*3;                    // Valid
    // char dt = '21 dec 2020';     // Invalid
    printf("a=%d\nb=%d\nv=%d", a, b, v);
    return 0;
}