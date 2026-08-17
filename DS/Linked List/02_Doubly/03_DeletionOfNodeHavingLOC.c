/*
Program: Deleting a Node at a Given Location in a Doubly Linked List of 10 Natural Numbers
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

    // Input for deleting a node at a given location
    int loc;
    printf("Enter the location of the node to delete (1-10): ");
    scanf("%d", &loc);

    // Deleting the node at the given location
    struct Node* current = head;
    while (loc > 1 && current != NULL) {
        current = current->link;
        loc--;
    }
    if (current != NULL) {
        if (current->prev != NULL) {
            current->prev->link = current->link;
        } else {
            head = current->link;
        }
        if (current->link != NULL) {
            current->link->prev = current->prev;
        }
        free(current);
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