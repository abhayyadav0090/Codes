#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    for(int i=1; i<=n; i++){
        for(int j=1; j<=n-i; j++) cout<< " ";
        char ch = 'A';
        for(int k=1; k<=i; k++) cout << ch++;
        ch--;
        for(int k=1; k<=i-1; k++) cout << --ch;
        cout <<endl;
    }

    return 0;
}

/* Output: 

    A
   ABA
  ABCBA
 ABCDCBA
ABCDEDCBA

*/