/*
Problem 7: Write a C program to find the sum of the table of 8.
Author: Abhay Yadav
Date: 04/08/2026
*/

#include <stdio.h>

int main(){
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    int sum=0;
    
    for (int i = 1; i <= 10; i++)
    {
        sum += (n*i);
    }
    printf("The sum of the table of %d is %d", n, sum);
    return 0;
}