/*
Program: To calculate Simple Interest
Author: Abhay Yadav
Date: 21/07/2026
*/

#include <stdio.h>

int main() {
    float p=0, r=0, t=0;

    printf("Enter the value of Principal :");
    scanf("%f",&p);
    
    printf("Enter the value of Rate in percent :");
    scanf("%f",&r);

    printf("Enter the value of time in months :");
    scanf("%f",&t);

    float si = ((p)*(r)*(t/12)/100);

    printf("Simple Interest for %f, at %f%% and for %f months is %f\n", p, r, t, si);
    printf("Total Amount for %f, at %f%% and for %f months is %f", p, r, t, si+p);

    return 0;
}