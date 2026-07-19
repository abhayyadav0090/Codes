#include <bits/stdc++.h>
using namespace std;

int main(){
    double H, W;
    cin >> H >> W;
    H = H / 100;
    double ans = W / H / H;
    if (ans >= 25) cout << "Yes";
    else cout << "No";
    return 0;
}