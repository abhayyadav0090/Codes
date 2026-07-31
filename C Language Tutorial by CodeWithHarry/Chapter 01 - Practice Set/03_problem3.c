/*
Program: To convert celsius to fahrenheit
Author: Abhay Yadav
Date: 21/07/2026
*/

#include <stdio.h>

int main() {
    float c=37, f=0;

    printf("Enter a Temperature in Celsius to convert it into Fahrenheit : ");
    scanf("%f", &c);

    f = (((9.0/5.0)*c)+32);
    printf("The Temperature in fahrenheit is : %f", f);

    return 0;
}