/*
Program: Finding the Location to Add a New Node in a Linked List of Natural Numbers
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

    // Taking Input to find the location to add a new node
    int item;
    printf("Enter the value to insert: ");
    scanf("%d", &item);

    // Find the position to insert the new node
    struct Node* current = head;
    while (current != NULL && current->info < item) {
        current = current->link;
    }

    // Traversing the linked list
    printf("Linked List contains:\n");
    temp = head;
    while (temp != NULL) {
        printf("%d -> ", temp->info);
        temp = temp->link;
    }
    printf("NULL\n");

    // print the location to add the new node give index of the node where it should be added
    if (current == head) {
        printf("The new node with value %d should be added at the beginning.\n", item);
    } else if (current == NULL) {
        printf("The new node with value %d should be added at the end.\n", item);
    } else {
        struct Node* previous = head;
        while (previous->link != current) {
            previous = previous->link;
        }
        printf("The new node with value %d should be added between %d and %d.\n", item, previous->info, current->info);
    }

    // Now add the new node at the found location
    struct Node* new_node = (struct Node*)malloc(sizeof(struct Node));
    new_node->info = item;
    if (current == head) {
        // Insert at the beginning
        new_node->link = head;
        head = new_node;
    } else if (current == NULL) {
        // Insert at the end
        new_node->link = NULL;
        tail->link = new_node;
        tail = new_node;
    } else {
        // Insert in between
        struct Node* previous = head;
        while (previous->link != current) {
            previous = previous->link;
        }
        previous->link = new_node;
        new_node->link = current;
    }

    // Traversing the linked list after insertion
    printf("Linked List after insertion contains:\n");
    temp = head;
    while (temp != NULL) {
        printf("%d -> ", temp->info);
        temp = temp->link;
    }

    return 0;
}