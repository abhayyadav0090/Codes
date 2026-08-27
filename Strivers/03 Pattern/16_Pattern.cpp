#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    for(int i=1; i<=n; i++){
        char CH = 'A' + i - 1;
        for(int j=0; j<i; j++) cout<< CH << " ";
        cout << endl;
    }
    return 0;
}

/*

A
B B
C C C
D D D D
E E E E E

*/