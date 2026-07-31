/*
Program: Quiz
Author: Abhay Yadav
Date: 31/07/2026
*/

#include <stdio.h>

int main(){
    /*
    Quick Quiz: Write a program to find grade of a student given his marks based on below:
        90 – 100 => A
        80 – 90 => B
        70 – 80 => C
        60 – 70 => D
        50 – 60 => E
        <50 => F
    */
   char grade;
   int marks = 46;
   printf("Enter your marks: ");
   scanf("%d", &marks);
   if(marks<=100 && marks>=90){
    printf("grade = 'A'");
   }
   else if(marks<=90 && marks>=80){
    printf("grade = 'B'");
   }
   else if(marks<=80 && marks>70){
    printf("grade = 'C'");
   }
   else if(marks<=70 && marks>=60){
    printf("grade = 'D'");
   }
   else if(marks<=60 && marks>=50){
    printf("grade = 'E'");
   }
   else{
    printf("grade = 'F'");
   }
    return 0;
}   