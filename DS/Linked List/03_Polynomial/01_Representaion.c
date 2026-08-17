/*
Program: Representing a Polynomial using a Doubly Linked List
Author: Abhay Yadav
Date: 17/08/2026
*/

#include <stdio.h>
#include <stdlib.h>

// Define the node structure
struct Node {
    struct Node* prev;
    int coeff;
    int expo;
    struct Node* link;
};

int main() {
    struct Node* head = NULL;   // Head pointer
    struct Node* temp = NULL;   // Temporary pointer
    struct Node* tail = NULL;   // Tail pointer

    // Input polynomial coefficients and exponents
    int coefficients[10], exponents[10], n;
    printf("Enter the number of terms in the polynomial: ");
    scanf("%d", &n);
    printf("Enter the coefficients of the polynomial (%d coefficients): ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &coefficients[i]);
    }
    printf("Enter the exponents of the polynomial (%d exponents): ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &exponents[i]);
    }

    // Inserting the coefficients into the linked list
    for (int i = 0; i < n; i++) {
        temp = (struct Node*)malloc(sizeof(struct Node));
        temp->coeff = coefficients[i];
        temp->expo = exponents[i];
        temp->prev = NULL;
        temp->link = NULL;

        if (head == NULL) {
            head = temp;   // First node
            tail = temp;
        } else {
            tail->link = temp;  // Link new node
            temp->prev = tail;  // Set previous pointer
            tail = temp;        // Move tail forward
        }
    }

    // Traversing the linked list
    printf("Linked List contains:\n");
    temp = head;
    while (temp != NULL) {
        printf("%dx^%d -> ", temp->coeff, temp->expo);
        temp = temp->link;
    }
    printf("NULL\n");

    return 0;
}