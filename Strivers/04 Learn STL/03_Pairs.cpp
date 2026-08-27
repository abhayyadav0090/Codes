/*
Author: Abhay Yadav
Program: Basic of Pairs
Date: 27/08/2026
*/

#include <bits/stdc++.h>
using namespace std;

void explainPair(){

    pair<int, int> p1 = {1, 2}; // A pair is a simple container defined in the STL that holds two values of different data types. It is defined in the <utility> header file. The values can be of any data type, including user-defined types. The first value is accessed using the first member, and the second value is accessed using the second member.
    cout << "Pair: (" << p1.first << ", " << p1.second << ")" << endl;

    pair<int, pair<int, int> > p2 = {1, {3, 4}};
    cout << "Pair: (" << p2.first << ", " << "(" << p2.second.first << ", " << p2.second.second << "))\n";

    pair<int, int> arr[]={{1,2}, {2,4}, {2,5}, {3,9}};
    cout << "Enter Index (0-3): \n";
    int n; cin >> n;
    cout << "Asked pair of Array is : (" << arr[n].first << ", " << arr[n].second << ")";

}

int main(){
    explainPair();
    return 0;
}