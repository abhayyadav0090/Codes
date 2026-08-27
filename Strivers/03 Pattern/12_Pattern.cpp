#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    for(int i=1; i<=n; i++){
        for(int k=1; k<=i; k++) cout << k;
        cout << string(2*(n-i), ' '); // Print spaces between the two halves
        for(int k=i; k>=1; k--) cout << k;
        cout << endl;
    }
    return 0;
}

/*

1                1
12              21
123            321
1234          4321
12345        54321
123456      654321
1234567    7654321
12345678  87654321
123456789987654321

*/