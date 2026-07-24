/*
Program: Question- 04
Author: Abhay Yadav
Date: 24/07/2026
*/

/*
Explain step by step evaluation of 3*x/y-z+k , where x = 2 , y = 3 , z = 3 , k = 1 .
*/

#include <stdio.h>

int main() {
    int x = 2, y = 3, z = 3, k = 1;
    int ans=3*x/y-z+k;
    printf("The value of 3*x/y-z+k is %d\n", ans);    
    printf("The value of 3*%d/%d-%d+%d is %d\n", x, y, z, k, ans);
    printf("The value of 6/%d-%d+%d is %d\n", y, z, k, ans);
    printf("The value of 2-%d+%d is %d\n", z, k, ans);
    printf("The value of -1+%d is %d\n", k, ans);
    printf("The value of 0 is %d\n", ans);
    return 0;
}