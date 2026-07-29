#include<stdio.h>

int main(){
    int t;
    scanf("%d", &t);
    while(t--){
        long long x, y, z;
        scanf("%lld %lld %lld", &x, &y, &z);
        
        if(z <= y){
            printf("-1\n");
            continue;
        }
        
        long long price = x, coins = 0, months = 0;
        while(coins < price){
            price += y;
            coins += z;
            months++;
        }
        
        printf("%lld\n", months);
    }
    return 0;
}