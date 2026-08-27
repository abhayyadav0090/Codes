#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
  void printDiamond(int n) {
    // Upper half (rows 1 to n)
    for (int i = 1; i <= n; i++) {
      for (int j = 1; j <= n-i; j++)
        cout << " ";
      for (int k = 1; k <= i; k++) {
        if (k == i) cout << "*";
        else cout << "* ";
      }
      cout << endl;
    }
   
    // Lower half (rows n to 1) — starts at n, not n-1
    for (int i = n; i >= 1; i--) {
      for (int j = 1; j <= n-i; j++)
        cout << " ";
      for (int k = 1; k <= i; k++) {
        if (k == i) cout << "*";
        else cout << "* ";
      }
      cout << endl;
    }
  }
};

int main() {
  int n;
  cin >> n;
  Solution sol;
  sol.printDiamond(n);
  return 0;
}

/*

    *
   * *
  * * *
 * * * *
* * * * *
* * * * *
 * * * *
  * * *
   * *
    *

*/