#include <stdio.h>
#include <stdlib.h>
struct Node { 
    int data; 
    struct Node* next; 
};
struct Node* head = NULL;

void insertEnd(int d){
    struct Node* newNode = malloc(sizeof(struct Node));
    newNode->data = d; 
    newNode->next = NULL;
    if(!head){ 
        head = newNode; 
        return; 
    }
    struct Node* temp = head;
    while(temp->next) temp = temp->next;
    temp->next = newNode;
}
void traverse(){
    struct Node* temp = head;
    while(temp){ 
        printf("%d ", temp->data); 
        temp = temp->next; 
    }
    printf("\n");
}
int main(){
    int n,val;
    printf("Enter number of nodes: ");
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        printf("Enter value %d: ",i+1);
        scanf("%d",&val);
        insertEnd(val);
    }
    printf("Linked list: ");
    traverse();
    return 0;
}
