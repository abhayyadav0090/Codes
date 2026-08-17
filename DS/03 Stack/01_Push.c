/*
Program: Push Operation in Stack
Author: Abhay Yadav
Date: 17/08/2026
*/

#include <stdio.h>

int main() {
    int stack[100], n, i, top = -1, value;

    printf("Enter the size of the stack: ");
    scanf("%d", &n);

    if ((top >= n - 1) || (n > 100)) {
        printf("Stack Overflow! Cannot push more elements.\n");
        if((n > 100)) printf("Please enter a valid size (less than or equal to 100).\n");
        else if(top >= n - 1) printf("The stack is already full. Cannot push more elements.\n");
        return 1;
    }

    printf("Enter %d elements to push into the stack:\n", n);
    for (i = 0; i < n; i++) {
        printf("Element %d: ", i + 1);
        scanf("%d", &value);
        stack[++top] = value;
    }

    printf("Elements in the stack are:\n");
    for (i = top; i >= 0; i--) {
        printf("%d ", stack[i]);
    }

    return 0;
}