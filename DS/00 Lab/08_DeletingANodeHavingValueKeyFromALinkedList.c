#include <stdio.h>
#include <stdlib.h>
struct Node { int data; struct Node* next; };
struct Node* head = NULL;

void insertEnd(int d){
    struct Node* newNode = malloc(sizeof(struct Node));
    newNode->data = d; newNode->next = NULL;
    if(!head){ head = newNode; return; }
    struct Node* temp = head;
    while(temp->next) temp = temp->next;
    temp->next = newNode;
}
void deleteNode(int key){
    struct Node* temp = head, *prev = NULL;
    if(temp && temp->data == key){ head = temp->next; free(temp); return; }
    while(temp && temp->data != key){ prev = temp; temp = temp->next; }
    if(temp){ prev->next = temp->next; free(temp); }
}
void traverse(){
    struct Node* temp = head;
    while(temp){ printf("%d ", temp->data); temp = temp->next; }
    printf("\n");
}
int main(){
    int n,val,key;
    printf("Enter number of nodes: ");
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        printf("Enter value %d : ", i+1);
        scanf("%d",&val);
        insertEnd(val);
    }
    printf("Enter value to delete: ");
    scanf("%d",&key);
    deleteNode(key);
    printf("List after deletion: ");
    traverse();
    return 0;
}
