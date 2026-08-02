/*
Program: Finding greatest of four numbers.
Author: Abhay Yadav
Date: 02/08/2026
*/

#include <stdio.h>

int main(){
    int a=4, b=2, c=116, d=32;
    printf("Enter four numbers: ");
    scanf("%d %d %d %d", &a, &b, &c, &d);
    if(a>=b && a>=c && a>=d){
        printf("The greatest of all is %d", a);
    }
    else if(b>=a && b>=c && b>=d){
        printf("The greatest of all is %d", b);
    }
    else if(c>=a && c>=b && c>=d){
        printf("The greatest of all is %d", c);
    }
    else if(d>=a && d>=c && d>=b){
        printf("The greatest of all is %d", d);
    }
    return 0;
}