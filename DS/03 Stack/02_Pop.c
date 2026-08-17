/*
Program: Pop Operation in Stack
Author: Abhay Yadav
Date: 17/08/2026
*/

#include <stdio.h>

#define MAX 100

int main() {
    int stack[MAX], n, i, top = -1, value;

    // First, build up the stack by pushing n elements
    printf("Enter the number of elements to push onto the stack: ");
    scanf("%d", &n);

    if (n < 0 || n > MAX) {
        printf("Invalid size! Please enter a value between 0 and %d.\n", MAX);
        return 1;
    }

    printf("Enter %d elements to push onto the stack:\n", n);
    for (i = 0; i < n; i++) {
        printf("Element %d: ", i + 1);
        scanf("%d", &value);
        stack[++top] = value;
    }

    printf("Stack before pop:\n");
    for (i = top; i >= 0; i--) {
        printf("%d ", stack[i]);
    }
    printf("\n");

    // Ask the user if they want to pop an element
    char choice;
    printf("Do you want to pop an element? (y/n): ");
    scanf(" %c", &choice);

    // Pop operation with underflow check
    while(choice == 'y' || choice == 'Y') {
        if (top < 0) {
            printf("Stack Underflow! Cannot pop from an empty stack.\n");
            break;
        } else {
            value = stack[top--];
            printf("Popped element: %d\n", value);
        }

        // Show the stack after popping
        printf("Stack after pop: ");
        if (top == -1) {
            printf("(empty)\n");
        } else {
            for (i = top; i >= 0; i--) {
                printf("%d ", stack[i]);
            }
            printf("\n");
        }

        // Ask if the user wants to pop another element
        printf("Do you want to pop another element? (y/n): ");
        scanf(" %c", &choice);
    }

    return 0;
}


    