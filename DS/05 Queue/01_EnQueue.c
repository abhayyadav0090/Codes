/*
Program: EnQueue Operation in Queue
Author: Abhay Yadav
Date: 09/09/2026
*/

#include <stdio.h>

void traverse(int Q[], int F, int R, int MAX) {
    if(F == -1) {
        printf("Queue is empty.\n");
        return;
    }
    
    printf("Queue elements: ");
    if (R >= F) {
        // Standard traversal if Rear is ahead of Front
        for(int i = F; i <= R; i++) {
            printf("%d ", Q[i]);
        }
    } else {
        // Circular traversal: Front to end of array, then start of array to Rear
        for(int i = F; i < MAX; i++) {
            printf("%d ", Q[i]);
        }
        for(int i = 0; i <= R; i++) {
            printf("%d ", Q[i]);
        }
    }
    printf("\n");
}

void EnQueue(int Q[], int *F, int *R, int MAX, int item) {
    // Check if queue is full (0-indexed)
    if((*F == 0 && *R == MAX - 1) || (*F == *R + 1)) {
        printf("Queue is full. Cannot enqueue %d\n", item);
        return;
    }
    else {
        // If queue is empty
        if(*F == -1) {
            *F = 0; 
            *R = 0;
        }
        // If rear has reached the end, wrap around to index 0
        else if(*R == MAX - 1) {
            *R = 0;
        }
        // Otherwise, simply increment rear
        else {
            *R = *R + 1;
        }
    }
    // Insert the item at the new rear position
    Q[*R] = item;
}

int main() {
    int Q[100];
    // Initialize F and R to -1 (representing an empty queue)
    int F = -1, R = -1, MAX, item, num_elements;
    
    printf("Enter the maximum capacity of the queue: ");
    scanf("%d", &MAX);
    
    printf("How many elements do you want to initially insert? ");
    scanf("%d", &num_elements);
    
    // Properly use EnQueue to populate the queue
    for(int i = 0; i < num_elements; i++) {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &item);
        EnQueue(Q, &F, &R, MAX, item);
    }
    
    printf("\nEnter a new item to be added: ");
    scanf("%d", &item);
    
    // Pass memory addresses of F and R
    EnQueue(Q, &F, &R, MAX, item);
    
    // Pass MAX to handle circular traversal correctly
    traverse(Q, F, R, MAX);
    
    return 0;
}