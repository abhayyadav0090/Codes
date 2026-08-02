/*
Program: Print numbers using For Loop
Author: Abhay Yadav
Date: 02/08/2026
*/

#include <stdio.h>

int main(){
    int n=0;
    printf("Enter a number: ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        printf("%d\n", i);
    }
    
    return 0;
}