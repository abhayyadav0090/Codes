/*
Program: If-else Statements
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
    else {
        printf("You are a child.\n");
    }
    
    if(age>=18){
        printf("You can DRIVE.\n");
    }
    else if(age>=70){
        printf("You are too old\n");
    }
    else {
        printf("You can't DRIVE!!\n");
    }
    return 0;
}