#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    
    int size = 2*n - 1;
    
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            // Distance from nearest border
            int dist = min({i, j, size-1-i, size-1-j});
            cout << n - dist;
            if (j < size-1) cout << " ";
        }
        cout << "\n";
    }
    
    return 0;
}