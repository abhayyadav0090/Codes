#include<stdio.h>
int main(){
     
    int a; // int data type -> %d
    // stores integers
    a=6;

    float b; // float data type -> %f
    // store floating point values or real constants or decimals
    b = 4.7;

    char c; // character data type -> %c
    // store single characters in single inverted commas (' ')
    c = 'A';

    printf("The value of a is %d\n", a);
    printf("The value of b is %f\n", b);
    printf("The value of c is %c and ASCII value is %d\n",c , c);

    return 0;
}