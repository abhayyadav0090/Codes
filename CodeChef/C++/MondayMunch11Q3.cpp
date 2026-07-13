#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n, k;
        cin >> n >> k;
        
        vector<int> w(n);
        for(int i = 0; i < n; i++) cin >> w[i];
        
        sort(w.begin(), w.end());
        
        long long total = 0;
        for(int x : w) total += x;
        
        // Put K smallest in box1
        long long sumK = 0;
        for(int i = 0; i < k; i++) sumK += w[i];
        long long diff1 = abs(total - 2*sumK);
        
        // Put K largest in box1
        sumK = 0;
        for(int i = n-k; i < n; i++) sumK += w[i];
        long long diff2 = abs(total - 2*sumK);
        
        cout << max(diff1, diff2) << "\n";
    }
    return 0;
}