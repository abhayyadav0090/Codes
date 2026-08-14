/*
Problem 9: Write a C program to find the factorial of a given number.
Author: Abhay Yadav
Date: 04/08/2026
*/

#include <stdio.h>

int main(){
    // 8! = 1 X 2 X 3 X 4 X 5 X 6 X 7 X 8
    // 5! = 1 X 2 X 3 X 4 X 5
    // n! = 1 X 2 X 3 X 4 X 5 ..... X n
    // 0! = 1
    double i = 1, product=1, n = 5;
    printf("Enter a number: ");
    scanf("%lf", &n);

    while(i<=n)
    {
        product *=i;
        i++;
    }
    printf("The factorial (in double)   of  %2.0lf is %2.0lf\n", n, product);

    i = 1;
    long long fact=1, num = n;

    while(i<=num)
    {
        fact *=i;
        i++;
    }
    printf("The factorial (in long long) of %lld is %lld", num, fact);

    return 0;
}