/*
Program: Stack Operations - Push, Pop, IsEmpty, IsFull, Peek/Top, Size, Display
Author: Abhay Yadav
Date: 17/08/2026
*/

#include <stdio.h>

#define MAX 100

int stack[MAX];
int top = -1;   // top == -1 means the stack is empty

// Returns 1 if the stack is empty, 0 otherwise
int isEmpty() {
    return (top == -1);
}

// Returns 1 if the stack is full, 0 otherwise
int isFull() {
    return (top == MAX - 1);
}

// Returns the current number of elements in the stack
int size() {
    return (top + 1);
}

// Push a value onto the stack
void push(int value) {
    if (isFull()) {
        printf("Stack Overflow! Cannot push %d, the stack is full.\n", value);
        return;
    }
    stack[++top] = value;
    printf("Pushed %d onto the stack.\n", value);
}

// Pop the top value off the stack
void pop() {
    if (isEmpty()) {
        printf("Stack Underflow! Cannot pop from an empty stack.\n");
        return;
    }
    int value = stack[top--];
    printf("Popped element: %d\n", value);
}

// Peek/Top: look at the top value without removing it
void peek() {
    if (isEmpty()) {
        printf("Stack is empty. Nothing to peek.\n");
        return;
    }
    printf("Top element: %d\n", stack[top]);
}

// Display all elements in the stack, from top to bottom
void display() {
    if (isEmpty()) {
        printf("Stack is empty.\n");
        return;
    }
    printf("Stack (top to bottom): ");
    for (int i = top; i >= 0; i--) {
        printf("%d ", stack[i]);
    }
    printf("\n");
}

int main() {
    int choice, value;

    while (1) {
        printf("\n----- Stack Menu -----\n");
        printf("1. Push\n");
        printf("2. Pop\n");
        printf("3. IsEmpty\n");
        printf("4. IsFull\n");
        printf("5. Peek/Top\n");
        printf("6. Size\n");
        printf("7. Display\n");
        printf("8. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter value to push: ");
                scanf("%d", &value);
                push(value);
                break;

            case 2:
                pop();
                break;

            case 3:
                if (isEmpty())
                    printf("Stack is empty.\n");
                else
                    printf("Stack is not empty.\n");
                break;

            case 4:
                if (isFull())
                    printf("Stack is full.\n");
                else
                    printf("Stack is not full.\n");
                break;

            case 5:
                peek();
                break;

            case 6:
                printf("Stack size: %d\n", size());
                break;

            case 7:
                display();
                break;

            case 8:
                printf("Exiting program.\n");
                return 0;

            default:
                printf("Invalid choice! Please enter a number between 1 and 8.\n");
        }
    }

    return 0;
}