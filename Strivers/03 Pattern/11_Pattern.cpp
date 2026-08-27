#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    for(int i=1; i<=n; i++){
        for(int k=1; k<=i; k++){
            // Extra if else to remove the extra space at the end of each line
            if(k==i){ 
                if((i+k)%2==0) cout << "1";
                else cout << "0";
            }
            else{
                if((i+k)%2==0) cout << "1 ";
                else cout << "0 ";
            }
        }
        cout << endl;
    }
    return 0;
}

/*

1
0 1
1 0 1
0 1 0 1
1 0 1 0 1
0 1 0 1 0 1
1 0 1 0 1 0 1
0 1 0 1 0 1 0 1

*/