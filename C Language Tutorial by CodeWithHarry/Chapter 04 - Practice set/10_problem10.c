/*
Problem 10: Write a C program to check if a given number is prime or not.
// longest prime number is 2,147,483,647 which is 10 digits long. (longest prime number in 32 bit signed integer -> 2147483647)
Author: Abhay Yadav
Date: 04/08/2026
*/

#include <stdio.h>

int main(){

    int n = 7, not_prime = 0;
    printf("Enter a number: ");
    scanf("%d", &n);

    if (n == 0 || n == 1) not_prime = 1;
    else{
        for (int i = 2; i < n; i++){
            if (n % i == 0 && n != 2){
                not_prime = 1;
                break;
            }
        }
    }
    if (not_prime){
        printf("%d is not prime.\n", n);
    }
    else{
        printf("%d is prime.\n", n);
    }

    return 0;
}