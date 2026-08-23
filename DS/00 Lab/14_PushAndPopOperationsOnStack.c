#include <stdio.h>
#define MAX 10
int stack[MAX], top=-1;

void push(int val){
    if(top==MAX-1) printf("Stack Overflow\n");
    else stack[++top]=val;
}
void pop(){
    if(top==-1) printf("Stack Underflow\n");
    else printf("Popped: %d\n", stack[top--]);
}
void display(){
    if(top==-1){ printf("Stack Empty\n"); return; }
    for(int i=0;i<=top;i++) printf("%d ",stack[i]);
    printf("\n");
}
int main(){
    int choice,val;
    printf("Stack Operations (Push, Pop, Display)\n");
    printf("Menu: 1.Push 2.Pop 3.Display 4.Exit\n");
    while(1){
        printf("Enter Choice (1-4): ");
        scanf("%d",&choice);
        if(choice==1){ printf("Enter value: "); scanf("%d",&val); push(val); }
        else if(choice==2) pop();
        else if(choice==3) display();
        else break;
    }
    return 0;
}
