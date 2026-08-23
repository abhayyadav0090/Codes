#include <stdio.h>
int fib(int n){ if(n<=1) return n; return fib(n-1)+fib(n-2); }
int main(){
    int n=0;
    printf("Enter number of terms: "); scanf("%d",&n);
    printf("Fibonacci terms: ");
    for(int i=0;i<n;i++) printf("%d ", fib(i));
    printf("\n");
    return 0;
}