/*
Program: If Statements
Author: Abhay Yadav
Date: 31/07/2026
*/

#include <stdio.h>

int main() {
    int age = 5;
    printf("Enter your age: ");
    scanf("%d", &age);
    if(age>=13){
        printf("You are a teenager.\n");
    }
    
    if(age>=18){
        printf("You can DRIVE.\n");
    }

    if(age%5==0){
        printf("Your age is divisible by 5\n");
    }

    return 0;
}