/*
Problem 8: Write a C program to find the factorial of a given number.
Author: Abhay Yadav
Date: 04/08/2026
*/

#include <stdio.h>

int main(){
    // 8! = 1 X 2 X 3 X 4 X 5 X 6 X 7 X 8
    // 5! = 1 X 2 X 3 X 4 X 5
    // n! = 1 X 2 X 3 X 4 X 5 ..... X n
    // 0! = 1
    long long product=1;
    long long n = 1;
    printf("Enter a number: ");
    scanf("%lld", &n);
    for (long long i = 1; i <= n; i++)
    {
        product *=i;
    }
    printf("The factorial is %lld", product);
    return 0;
}