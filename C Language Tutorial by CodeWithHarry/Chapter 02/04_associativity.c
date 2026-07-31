/*
Program: Operator Associativity
Author: Abhay yadav
Date: 24/07/2026
*/

#include <stdio.h>

int main() {
    int a = 3, b = 6, c = 9;
    printf("Enter the value of a, b & c {e.g. : %d %d %d} : ", a, b, c);
    scanf("%d %d %d", &a, &b, &c);
    printf("The value of %d%%%d/%d is %d\n", a, b, c, a%b/c);
    printf("The value of %d*%d/%d is %d\n", a, b, c, a*b/c+7);
    printf("The value of 3*%d/2*%d+7*%d is %d\n", b, c, a, 3*b/2*c+7*a);
    // {a = 3, b = 6, c = 9} -> 3*b/2*c+7*a -> 3*b/2*c+21 -> 18/2*c+21 -> (left to right for same Precedence operators)
    // (18/2)*c+21 -> 9*c+21 -> 81+21 -> 102
    printf("The value of a%%b*a-b/c is %d\n", a%b*a-b/c);
    return 0;
}

/*
Operator Precedence in C:
    Have a look at the below statement: 3*x – 8*y
        Is it (3x) – (8y) or 3(x – 8y)? In C language, simple mathematical rules like BODMAS no longer apply.
        The answer is provided by operator precedence & associativity.

    The following table lists the operator priority in C:
    Priority    Operators
    1st         * / %
    2nd         + -
    3rd         =

    Operators of higher priority are evaluated first in the absence of parenthesis.

    Operator Associativity :
        When operators of equal priority are present in an expression, the tie is taken care of by associativity.
        -->> Left to Right
        x * y / z → (x * y) / z
        x / y * z → (x / y) * z
        * and / follow left to right associativity.

    PRO TIP:
        Always use parentheses in case of confusion to
        make the order of evaluation explicit and avoid
        subtle bugs.

Operator Precedence:
    Priority    Operator
    1st         !
    2nd         *, /, %
    3rd         +, -
    4th         <>, <=, >=
    5th         ==, !=
    6th         &&
    7th         ||
    8th         =
*/
