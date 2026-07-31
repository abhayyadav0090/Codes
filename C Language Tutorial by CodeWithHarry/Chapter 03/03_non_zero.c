/*
Program: Non-Zero expressions in If Statements
Author: Abhay Yadav
Date: 31/07/2026
*/

#include <stdio.h>

int main() {
    if(1){
        printf("1         is Executed !!\n");
    }
    if(234){
        printf("234       is Executed !!\n");
    }
    if(2.74){
        printf("2.74      is Executed !!\n");
    }
    if('c'){
        printf("\'c\'       is Executed !!\n");
    }
    if("Hello"){
        printf("\"Hello\"   is Executed !!\n");
    }
    if(0.001){
        printf("0.001     is Executed !!\n");
    }
    return 0;
}