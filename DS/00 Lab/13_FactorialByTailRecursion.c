#include <stdio.h>
int factTail(int n,int acc){ 
    if(n==0) return acc; 
    return factTail(n-1,n*acc); 
}
int main(){
    int n; 
    printf("Enter n: "); 
    scanf("%d",&n);
    printf("Factorial (Tail Recursion) = %d\n", factTail(n,1));
    return 0;
}