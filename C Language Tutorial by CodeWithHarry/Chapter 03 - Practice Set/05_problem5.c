/*
Program: Check if the entered 
Author: Abhay Yadav
Date: 02/08/2026
*/

// https://www.cs.cmu.edu/~pattis/15-1XX/common/handouts/ascii.html

#include <stdio.h>

int main(){
    char ch = 'A';
    printf("Enter a english alphabet character: ");
    scanf("%c", &ch);
    printf("The character is %c\n", ch);
    printf("The value of character is %d\n", ch);
    // 97, 122
    if(ch >= 97 && ch<=122){
        printf("%c is lowercase.\n", ch);
    }
    else{
         printf("%c is not lowecase.\n", ch);
    }
    return 0;
}