#include <stdio.h>
#include <stdlib.h>
struct Node { int coeff, pow; struct Node* next; };

struct Node* addTerm(struct Node* head,int c,int p){
    struct Node* newNode=malloc(sizeof(struct Node));
    newNode->coeff=c; newNode->pow=p; newNode->next=NULL;
    if(!head) return newNode;
    struct Node* temp=head;
    while(temp->next) temp=temp->next;
    temp->next=newNode;
    return head;
}
void display(struct Node* head){
    while(head){ printf("%dx^%d ",head->coeff,head->pow); head=head->next; }
    printf("= 0\n");
}
int main(){
    int n,c,p;
    struct Node* poly=NULL;
    printf("Enter number of terms: ");
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        printf("Enter coeff and power of term %d: ", i+1);
        scanf("%d%d",&c,&p);
        poly=addTerm(poly,c,p);
    }
    printf("Polynomial: ");
    display(poly);
    return 0;
}
