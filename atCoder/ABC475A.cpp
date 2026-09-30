/*
Problem Statement
You are given a string 
S consisting of lowercase English letters.

Output the string obtained by inserting o between each pair of adjacent characters of S.

Constraints
S is a string of length between 2 and 10 (inclusive) consisting of lowercase English letters.
*/

#include <iostream>
#include <string>

using namespace std;

int main() {
    string s;
    cin >> s;
    for (int i = 0; i < s.length(); ++i) {
        cout << s[i];
        if (i + 1 < s.length()) {
            cout << 'o';
        }
    }
    cout << "\n";
    return 0;
}