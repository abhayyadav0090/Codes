#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    for(int i=n; i>=1; i--){
        char num = 'A';
        for(int j=1; j<=i; j++){
            cout << num++ << " ";
        }
        cout << endl;
    }

    return 0;
}

/*

A B C D E 
A B C D 
A B C 
A B 
A 

*/