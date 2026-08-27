#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    for(int i=n; i>=1; i--){
        char ch = 'A' + i - 1;
        for(int j=1; j<=n-i+1; j++) cout << ch++ << " ";
        cout << endl;
    }
    return 0;
}

/*

E
D E
C D E
B C D E
A B C D E

*/