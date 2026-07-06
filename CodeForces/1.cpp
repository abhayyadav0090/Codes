#include <bits/stdc++.h>
using namespace std;
int main() {
    int w; cin >> w;
    // w must be even and > 2 (so we can split into two positive even parts)
    cout << (w % 2 == 0 && w > 2 ? "YES" : "NO");
}