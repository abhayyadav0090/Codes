#include<stdio.h>

int main(){
    int t;
    scanf("%d", &t);
    while(t--){
        long long x, y, p;
        scanf("%lld %lld %lld", &x, &y, &p);
        
        if(x * y >= p){
            printf("0\n");
            continue;
        }
        
        int ans = 1e9;
        // Try total moves from 1 to some max
        for(int total = 1; total <= 200; total++){
            // Try giving i moves to x, rest to y
            for(int i = 0; i <= total; i++){
                int j = total - i;
                if((x+i) * (y+j) >= p){
                    if(total < ans) ans = total;
                    break;
                }
            }
            if(ans != 1e9) break;
        }
        
        printf("%d\n", ans);
    }
    return 0;
}