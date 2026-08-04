/*
Program 05: Write a C program to calculate the factorial of a number using recursion.
Author: Abhay Yadav
Date: 04/08/2026
*/

#include <stdio.h>

double factorial(long long n); // Function prototype
    // Factorial(5) = 1 X 2 X 3 X 4 X 5
    // Factorial(4) = 1 X 2 X 3 X 4
    // Factorial(3) = 1 X 2 X 3
    // Factorial(n) = 1 x 2 X 3 X .... X n-1 X n
    //  = 1 x 2 X 3 X .... X n-1

double factorial(long long n){ 
    if(n == 1 || n == 0){ // Base condition
        return 1;
    }
    // Factorial(n) = Factorial(n-1) X n
    return n * factorial(n-1);
}

int main(){
    long long a = 6;
    printf("Enter a number to calculate its factorial: ");
    scanf("%lld", &a);
    printf("The factorial of %lld is %2.0lf", a, factorial(a));
    return 0;
}