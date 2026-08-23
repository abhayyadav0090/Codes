#include <stdio.h>
int main(){
    int n,f=1;
    printf("Enter n: "); scanf("%d",&n);
    for(int i=1;i<=n;i++) f*=i;
    printf("Factorial (Loop) = %d\n",f);
    return 0;
}
