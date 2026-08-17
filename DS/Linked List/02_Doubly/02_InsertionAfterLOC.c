/*
Program: Inserting a Node After a Given Location in a Doubly Linked List of 10 Natural Numbers
Author: Abhay Yadav
Date: 17/08/2026
*/

#include <stdio.h>
#include <stdlib.h>

// Define the node structure
struct Node {
    struct Node* prev;
    int info;
    struct Node* link;
};

int main() {
    struct Node* head = NULL;   // Head pointer
    struct Node* temp = NULL;   // Temporary pointer
    struct Node* tail = NULL;   // Tail pointer

    // Create linked list with 10 natural numbers
    for (int i = 1; i <= 10; i++) {
        temp = (struct Node*)malloc(sizeof(struct Node));
        temp->info = i;
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

    // Input for inserting a new node after a given location
    int loc, item;
    printf("Enter the location after which to insert a new node (1-10): ");
    scanf("%d", &loc);
    printf("Enter the value of the new node: ");
    scanf("%d", &item);

    // Inserting a new node after the given location
    struct Node* new_node = (struct Node*)malloc(sizeof(struct Node));
    new_node->info = item;
    new_node->prev = NULL;
    new_node->link = NULL;
    struct Node* current = head;
    while (loc > 1 && current != NULL) {
        current = current->link;
        loc--;
    }
    if (current != NULL) {
        new_node->link = current->link;
        new_node->prev = current;
        if (current->link != NULL) {
            current->link->prev = new_node;
        }
        current->link = new_node;
    } else {
        printf("Location is out of bounds.\n");
    }

    // Traversing the linked list
    printf("Linked List contains:\n");
    temp = head;
    while (temp != NULL) {
        printf("%d -> ", temp->info);
        temp = temp->link;
    }
    printf("NULL\n");

    return 0;
}