/*
Program: Adding Two Polynomials using a Doubly Linked List
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

// Helper: insert a new node (coeff, expo) at the end of the list
// pointed to by *head / *tail
void insertNode(struct Node** head, struct Node** tail, int coeff, int expo) {
    struct Node* temp = (struct Node*)malloc(sizeof(struct Node));
    temp->coeff = coeff;
    temp->expo = expo;
    temp->prev = NULL;
    temp->link = NULL;

    if (*head == NULL) {
        *head = temp;
        *tail = temp;
    } else {
        (*tail)->link = temp;
        temp->prev = *tail;
        *tail = temp;
    }
}

int main() {
    struct Node* head1 = NULL, *tail1 = NULL;   // First polynomial
    struct Node* head2 = NULL, *tail2 = NULL;   // Second polynomial
    struct Node* result_head = NULL, *result_tail = NULL; // Result polynomial

    int coefficients1[10], coefficients2[10], exponents1[10], exponents2[10], n;

    printf("Enter the number of terms in the polynomial: ");
    scanf("%d", &n);

    printf("Enter the coefficients of the first polynomial (%d coefficients): ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &coefficients1[i]);
    }
    printf("Enter the exponents of the first polynomial (%d exponents): ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &exponents1[i]);
    }
    printf("Enter the coefficients of the second polynomial (%d coefficients): ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &coefficients2[i]);
    }
    printf("Enter the exponents of the second polynomial (%d exponents): ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &exponents2[i]);
    }

    // Build the linked list for the first polynomial
    for (int i = 0; i < n; i++) {
        insertNode(&head1, &tail1, coefficients1[i], exponents1[i]);
    }

    // Build the linked list for the second polynomial
    for (int i = 0; i < n; i++) {
        insertNode(&head2, &tail2, coefficients2[i], exponents2[i]);
    }

    // A "used" flag array so we don't add the same term of poly2 twice
    int used2[10] = {0};

    // Step 1: for every term in poly1, look for a matching exponent in poly2
    struct Node* p1 = head1;
    while (p1 != NULL) {
        int matched = 0;
        int j = 0;
        struct Node* p2 = head2;
        while (p2 != NULL) {
            if (p1->expo == p2->expo && !used2[j]) {
                // Same exponent -> add coefficients
                insertNode(&result_head, &result_tail, p1->coeff + p2->coeff, p1->expo);
                used2[j] = 1;
                matched = 1;
                break;
            }
            p2 = p2->link;
            j++;
        }
        if (!matched) {
            // No matching exponent in poly2 -> carry the term as-is
            insertNode(&result_head, &result_tail, p1->coeff, p1->expo);
        }
        p1 = p1->link;
    }

    // Step 2: add any leftover terms from poly2 that had no match in poly1
    int j = 0;
    struct Node* p2 = head2;
    while (p2 != NULL) {
        if (!used2[j]) {
            insertNode(&result_head, &result_tail, p2->coeff, p2->expo);
        }
        p2 = p2->link;
        j++;
    }

    // Traverse and print the result linked list
    printf("Resultant Polynomial:\n");
    struct Node* temp = result_head;
    while (temp != NULL) {
        printf("%dx^%d -> ", temp->coeff, temp->expo);
        temp = temp->link;
    }
    printf("NULL\n");

    return 0;
}