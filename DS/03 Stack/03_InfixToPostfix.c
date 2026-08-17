/*
Program: Infix/Postfix Conversion and Evaluation using a Stack
           (supports multi-digit numbers)
Author: Abhay Yadav
Date: 17/08/2026

The user chooses whether they are entering an INFIX expression
(which gets converted to postfix first) or a POSTFIX expression
(which is used directly). Either way, the postfix form is then
evaluated.

Postfix is stored as SPACE-SEPARATED TOKENS (e.g. "12 3 +") so
that multi-digit numbers can be told apart from one another.
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

#define MAX 100

char stack[MAX];
int top = -1;

// Push a character onto the character stack
void push(char c) {
    if (top == MAX - 1) {
        printf("Stack Overflow!\n");
        return;
    }
    stack[++top] = c;
}

// Pop a character off the character stack
char pop() {
    if (top == -1) {
        return '\0'; // Stack is empty
    }
    return stack[top--];
}

// Peek at the top of the character stack without removing it
char peek() {
    if (top == -1) {
        return '\0';
    }
    return stack[top];
}

// Return the precedence of an operator (higher number = higher precedence)
int precedence(char c) {
    if (c == '^') return 3;
    if (c == '*' || c == '/') return 2;
    if (c == '+' || c == '-') return 1;
    return -1; // Not an operator
}

// Check if a character is an operator
int isOperator(char c) {
    return (c == '+' || c == '-' || c == '*' || c == '/' || c == '^');
}

// Convert infix expression to postfix expression (space-separated tokens)
void infixToPostfix(char infix[], char postfix[]) {
    int i = 0, j = 0;
    top = -1; // Reset stack

    while (infix[i] != '\0') {
        char c = infix[i];

        if (isspace(c)) {
            i++;
            continue; // Skip whitespace
        }

        if (isdigit(c)) {
            // Operand: read the FULL number, one or more digits
            while (isdigit(infix[i])) {
                postfix[j++] = infix[i++];
            }
            postfix[j++] = ' '; // Separate this number from the next token
            continue; // i is already advanced past the number
        } else if (c == '(') {
            push(c);
        } else if (c == ')') {
            // Pop and output until matching '(' is found
            while (top != -1 && peek() != '(') {
                postfix[j++] = pop();
                postfix[j++] = ' ';
            }
            pop(); // Discard the '('
        } else if (isOperator(c)) {
            // '^' is right-associative, all others are left-associative
            while (top != -1 && peek() != '(' &&
                   (precedence(peek()) > precedence(c) ||
                   (precedence(peek()) == precedence(c) && c != '^'))) {
                postfix[j++] = pop();
                postfix[j++] = ' ';
            }
            push(c);
        }

        i++;
    }

    // Pop any remaining operators from the stack
    while (top != -1) {
        postfix[j++] = pop();
        postfix[j++] = ' ';
    }

    // Trim a possible trailing space
    if (j > 0 && postfix[j - 1] == ' ') {
        j--;
    }
    postfix[j] = '\0';
}

// ---- A separate stack of numbers (int), used only for evaluation ----
int numStack[MAX];
int numTop = -1;

void numPush(int value) {
    if (numTop == MAX - 1) {
        printf("Stack Overflow!\n");
        return;
    }
    numStack[++numTop] = value;
}

int numPop() {
    if (numTop == -1) {
        printf("Stack Underflow during evaluation!\n");
        return 0;
    }
    return numStack[numTop--];
}

// Evaluate a postfix expression given as space-separated tokens
int evaluatePostfix(char postfix[]) {
    numTop = -1; // Reset numeric stack

    char token[MAX];
    int i = 0, k;

    while (postfix[i] != '\0') {
        // Skip any spaces between tokens
        while (postfix[i] == ' ') {
            i++;
        }
        if (postfix[i] == '\0') {
            break;
        }

        // Read one full token (a number, or a single operator character)
        k = 0;
        while (postfix[i] != ' ' && postfix[i] != '\0') {
            token[k++] = postfix[i++];
        }
        token[k] = '\0';

        if (isdigit(token[0])) {
            // Multi-digit number: convert the whole token to int
            numPush(atoi(token));
        } else if (isOperator(token[0]) && token[1] == '\0') {
            // Single-character operator token
            int b = numPop(); // Right operand (pushed last)
            int a = numPop(); // Left operand
            int result = 0;

            switch (token[0]) {
                case '+': result = a + b; break;
                case '-': result = a - b; break;
                case '*': result = a * b; break;
                case '/':
                    if (b == 0) {
                        printf("Error: Division by zero!\n");
                        return 0;
                    }
                    result = a / b;
                    break;
                case '^': {
                    result = 1;
                    for (int p = 0; p < b; p++) {
                        result *= a;
                    }
                    break;
                }
            }
            numPush(result);
        }
    }

    return numPop();
}

int main() {
    char input[MAX], postfix[MAX];
    int choice;

    while (1) {
        printf("\n----- Expression Evaluator -----\n");
        printf("1. Enter an Infix expression\n");
        printf("2. Enter a Postfix expression\n");
        printf("3. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        getchar(); // Consume leftover newline before fgets

        if (choice == 1) {
            printf("Enter an infix expression (e.g. 12+345*2): ");
            fgets(input, MAX, stdin);
            input[strcspn(input, "\n")] = '\0'; // Remove trailing newline

            infixToPostfix(input, postfix);

            printf("Infix expression   : %s\n", input);
            printf("Postfix expression : %s\n", postfix);

        } else if (choice == 2) {
            printf("Enter a postfix expression, tokens space-separated (e.g. 12 345 2 * +): ");
            fgets(input, MAX, stdin);
            input[strcspn(input, "\n")] = '\0'; // Remove trailing newline

            strcpy(postfix, input); // Already in postfix form, use directly

            printf("Postfix expression : %s\n", postfix);

        } else if (choice == 3) {
            printf("Exiting program.\n");
            break;

        } else {
            printf("Invalid choice! Please enter 1, 2, or 3.\n");
            continue; // Skip evaluation, go straight back to the menu
        }

        int result = evaluatePostfix(postfix);
        printf("Evaluated result   : %d\n", result);
    }

    return 0;
}