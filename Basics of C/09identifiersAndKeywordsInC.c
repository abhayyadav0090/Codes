/*
Abhay Yadav
revising basics
15/07/2026
*/

/*
they are 32 keywords in C Language
Keywords can not be used as identifiers
All the keywords are in lowercase
int, float, break, goto, if, for, continue, while, do, switch, auto, double, ........ etc

Identifiers are predefined or userdefined variables or Functions
always starts with letters (english alphabet) {but in some compilers -> you can start with underscore '_'}
No special symbols are allowed except underscore '_'
Sum, sum12, sum_12, _sum_12, sum__12, sum();
void Sum(); {void-> keyword, Sum()-> identifiers}
*/

#include <stdio.h>
#include <stdlib.h>

int main() {
    int _sum_12=0, sum__12=0;
    printf("%d%d", _sum_12, sum__12);
    return 0;
}