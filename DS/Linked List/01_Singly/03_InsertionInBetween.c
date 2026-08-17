/*
Program: Inserting/Adding a new Node in a Linked List of Natural Numbers in between two nodes according to the Ascending Order
Author: Abhay Yadav
Date: 17/08/2026
*/

#include <stdio.h>
#include <stdlib.h>

// Define the node structure
struct Node {
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
        temp->link = NULL;

        if (head == NULL) {
            head = temp;   // First node
            tail = temp;
        } else {
            tail->link = temp;  // Link new node
            tail = temp;        // Move tail forward
        }
    }

    // Inserting a new node at the beginning
    struct Node* new_node = (struct Node*)malloc(sizeof(struct Node));
    int item;
    printf("Enter the value to insert in between: ");
    scanf("%d", &item);
    new_node->info = item;
    new_node->link = NULL;

    // Find the position to insert the new node
    struct Node* current = head;
    while (current != NULL && current->info < item) {
        current = current->link;
    }

    if (current == head) {
        // Insert at the beginning
        new_node->link = head;
        head = new_node;
    } else {
        // Insert in between
        struct Node* previous = head;
        while (previous->link != current) {
            previous = previous->link;
        }
        previous->link = new_node;
        new_node->link = current;
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