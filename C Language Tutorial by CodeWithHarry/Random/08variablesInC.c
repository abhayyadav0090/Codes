/*
Abhay Yadav
revising basics
17/07/2026
*/

/* 
Declaration of variables in c
Datatype variableName;
int a; {Declaration}
a=10; {Initialisation}
or -> int a = 10; {both at once} -> here a stores integers
float a = 3.14; -> here a will be storing float values.
char a;
a = 'a'; -> a will be storing characters.
void a; {Error!}

name->
can consist letters, digits & underscore
but can't have space, special symbols
always starts with letters (english alphabet) {but in some compilers -> you can start with underscore '_'}
abc, average, sum12, sum_12, Sum_12 -> valid
sum 12, Sum$12, 12sum, int_type, float, 1ab, Abhay's_Marks -> Invalid!
*/

#include <stdio.h>
#include <stdlib.h>

int main() {
    int A =25;
    char a = 'a';
    printf("ASCII value of %c = %d;\n", a, a); // a=97
    printf("%d", A*A+A);
    return 0;
}