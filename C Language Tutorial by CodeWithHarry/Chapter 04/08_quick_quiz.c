/*
Program: Quick Quiz
Author: Abhay Yadav
Date: 02/08/2026
*/

#include <stdio.h>

int main(){
    int n=0, i=1;
    printf("Enter a number: ");
    scanf("%d", &n);
    do{
        printf("%d\n", i);
        i++;
    }while(i<=n);
    
    return 0;
}