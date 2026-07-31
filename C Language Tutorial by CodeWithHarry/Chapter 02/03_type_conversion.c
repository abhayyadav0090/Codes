/*
Program: Type conversion
Author: Abhay Yadav
Date: 24/07/2026
*/

#include <stdio.h>

int main() {
    
    //Promotion int to float
    {
    int a = 9;
    int b = 2;
    float c = a/b; // (int)4
    printf("The value of a/b (int/int=int) is %f\n", c); // int/int=int -> 4.000000
    }
    {
    float a = 9;
    int b = 2;
    float c = a/b; // (int)4
    printf("The value of a/b (float/int=float) is %f\n", c); // float/int=float -> 4.500000
    }
    {
    int a = 9;
    float b = 2;
    float c = a/b; // (int)4
    printf("The value of a/b (int/float=float) is %f\n", c); // int/float=float -> 4.500000
    }
    {
    float a = 9;
    float b = 2;
    float c = a/b; // (int)4
    printf("The value of a/b (float/float=float) is %f\n", c); // float/float=float -> 4.500000
    }

    // Demotion from float to int
    {
    int a = 6.7;
    printf("The value of a (a = 6.7) is %d\n", a);
    int b = 3.0/9;
    printf("The value of b (b = 3.0/9) is %d\n", b); // 0
    // float c = a/b; // (int)4
    // printf("The value of a/b (int/int=int) is %f\n", c); // int/int=int -> 4.000000
    }
    return 0;
}