/*
Program: Program to result of student.
Author: Abhay Yadav
Date: 02/08/2026
*/

#include <stdio.h>

int main(){
    int marks1, marks2, marks3;

    printf("Enter marks of 1rst subject: ");
    scanf("%d", &marks1);
    printf("Enter marks of 2nd subject: ");
    scanf("%d", &marks2);
    printf("Enter marks of 3rd subject: ");
    scanf("%d", &marks3);
    printf("The marks are %d, %d and %d\n", marks1, marks2, marks3);

    if(marks1<33 || marks2<33 || marks3<33){
        printf("You are failed due to less marks in individual subject(s)\n"); 
    }
    else if((marks1 + marks2 + marks3)/3 <40){
        printf("You are failed due less percentage\n"); 
    }
    else{
        printf("You are passed!");
    }
    return 0;
}