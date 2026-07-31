/*
Program: To calculate area of Rectangle
Author: Abhay Yadav
Date: 21/07/2026
*/

#include <stdio.h>

int main() {
    int length = 0;
    int breadth = 0;

    printf("Enter the length of Rectangle : ");
    scanf("%d", &length);

    printf("Enter the breadth of Rectangle : ");
    scanf("%d", &breadth);

    printf("The Area of thie rectangle is : %d\n", length*breadth);
   return 0;
}