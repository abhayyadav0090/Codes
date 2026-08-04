/*
Program 02: Write a C program to print good morning, good afternoon and good evening using function.
Author: Abhay Yadav
Date: 04/08/2026
*/

#include <stdio.h>

void good_morning();
void good_afternoon();
void good_evening();


void good_morning(){
    printf("good morning\n");
}

void good_afternoon(){
    printf("good afternoon\n");
}

void good_evening(){
    printf("good evening\n");
}

int main(){
    good_morning();
    good_afternoon();
    good_evening();
    return 0;
}