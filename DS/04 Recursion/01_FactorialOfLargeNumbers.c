/*
Program: Calculate Factorial using Recursion
Author: Abhay Yadav
Date: 17/08/2026
*/

#include <stdio.h>

double fact(double num){
    if(num == 0 || num == 1){
        return 1;
    }
    else{
        return num * fact(num - 1);
    }
}

int main(){
    double n;
    printf("Enter a number: ");
    scanf("%lf", &n);
    if((n < 0) || (n != (int)n)){
        printf("Factorial is not defined for negative numbers or non-integers.\n");
        return 1;
    }
    printf("Factorial of %2.2lf is %2.2lf\n", n, fact(n));
    return 0;
}