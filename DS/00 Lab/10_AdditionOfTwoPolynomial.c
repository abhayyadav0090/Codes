#include <stdio.h>
#include <stdlib.h>
struct Node { int coeff,pow; struct Node* next; };

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
    printf("\n");
}
struct Node* addPoly(struct Node* p1,struct Node* p2){
    struct Node* res=NULL;
    while(p1 && p2){
        if(p1->pow==p2->pow){ 
            res=addTerm(res,p1->coeff+p2->coeff,p1->pow); 
            p1=p1->next; p2=p2->next; }
        else if(p1->pow>p2->pow){ 
            res=addTerm(res,p1->coeff,p1->pow); 
            p1=p1->next; }
        else { res=addTerm(res,p2->coeff,p2->pow); p2=p2->next; }
    }
    while(p1){ res=addTerm(res,p1->coeff,p1->pow); p1=p1->next; }
    while(p2){ res=addTerm(res,p2->coeff,p2->pow); p2=p2->next; }
    return res;
}
int main(){
    int n,c,p;
    struct Node* p1=NULL,*p2=NULL;
    printf("Enter terms in poly1: "); scanf("%d",&n);
    for(int i=0;i<n;i++){ 
        printf("Enter coeff and power of term %d: ", i+1);
        scanf("%d%d",&c,&p); p1=addTerm(p1,c,p); }
    printf("Enter terms in poly2: "); scanf("%d",&n);
    for(int i=0;i<n;i++){ 
        printf("Enter coeff and power of term %d: ", i+1);
        scanf("%d%d",&c,&p); p2=addTerm(p2,c,p); }
    printf("Poly1: "); display(p1);
    printf("Poly2: "); display(p2);
    struct Node* sum=addPoly(p1,p2);
    printf("Sum: "); display(sum);
    return 0;
}