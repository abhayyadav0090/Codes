/*
Program: To Calculate Area of Circle and Volume of Cylinder
Author: Abhay Yadav
Date: 21/07/2026
*/

#include <stdio.h>

int main() {
    
    int radius = 0;
    printf("Enter the Radius of Circle: ");
    scanf("%d", &radius);

    int height = 10;
    printf("Enter the Height to calculate Volume of Cylinder: ");
    scanf("%d", &height);

    printf("The Area of Circle with radius %d is %f\n", radius, 3.14*radius*radius);
    printf("The Volume of Cylinder with radius %d and height %d is %f", radius, height, 3.14*radius*height);

    return 0;
}