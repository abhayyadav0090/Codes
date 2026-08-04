/*
Program 04: Write a C program to find the area of a square using pow() function.
Author: Abhay Yadav
Date: 04/08/2026
*/

#include <stdio.h>
#include <math.h>

int main(){
    int a = 5;
    printf("Enter the side of the square: ");
    scanf("%d", &a);
    printf("The area of this square is %2.0f\n", pow(a, 2));
    return 0;
}