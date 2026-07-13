#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--){
        int l, b;
        cin >> l >> b;
        cout << __gcd(l, b) << "\n";
    }
    return 0;
}