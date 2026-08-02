/*
Program: Printing value of i in loop
Author: Abhay Yadav
Date: 02/08/2026
*/

#include <stdio.h>

int main(){
    int i = 0;
    while (i<10) {
        printf("%d. The value of i is %d \n", i+1, i); 
        i++;
    }
    return 0;
}