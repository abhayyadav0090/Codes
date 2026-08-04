/*
Problem 2: Write a C program to print the multiplication table of a given number in reverse order.
Author: Abhay Yadav
Date: 04/08/2026
*/

#include <stdio.h>

int main(){
    int n = 10;
    printf("Enter a number: ");
    scanf("%d", &n);
    for (int i = 10; i>=1; i--)
    {
        printf("%d X %d = %d\n", n, i, n*i );
    }
   
    return 0;
}