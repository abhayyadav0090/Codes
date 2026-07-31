/*
Program: Else If Statements
Author: Abhay Yadav
Date: 31/07/2026
*/

#include <stdio.h>

int main(){
    int age = 45;
    printf("Enter your age: ");
    scanf("%d", &age);

    if(age>60){
        printf("You can drive and you are a senior citizen");
    }
    else if(age>40){
        printf("You can drive and you are elder");
    } 
    else if(age>18){
        printf("You can drive");
    }
    else{
        printf("You cannot drive");
    }


    return 0;
}