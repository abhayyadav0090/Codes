// A. Team

#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, ans = 0;
    cin >> n;
    while(n--){
        int count = 0;
        vector<int> a(3);
        for(int i = 0; i < 3; i++){
            cin >> a[i];
        }
        for(int i = 0; i < 3; i++){
            if(a[i] == 1 && a[i] != 0){
                count++;
            }
        }
        if(count >= 2){
            ans++;
        }
    }
    cout << ans << "\n";
    return 0;
}