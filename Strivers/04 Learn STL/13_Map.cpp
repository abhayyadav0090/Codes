/*
Author: Abhay Yadav
Program: Basic of Map
Date: 25/09/2026
*/

#include <bits/stdc++.h>
using namespace std;

void explainMap() {
    map<int, int> map1;
    map<int, pair<int, int>> map2;
    map<pair<int, int>, int> map3;

    // map stores unique keys in sorted order and allows fast retrieval of values based on keys. 

    // map1: simple int->int
    map1[1] = 2;

    // map2: int -> pair<int,int>
    map2[1] = {3, 1};
    map2.insert({2, {4, 5}});

    // map3: pair<int,int> -> int
    map3 = {
        {{1, 2}, 3},
        {{2, 4}, 5},
        {{3, 1}, 6}
    };

    cout<<map1[5]<<endl<<endl;  // 0

    // Print to verify
    cout << "map1:\n";
    for (auto &p : map1) cout << p.first << " -> " << p.second << "\n";

    cout << "\nmap2:\n";
    for (auto &p : map2) cout << p.first << " -> (" << p.second.first << "," << p.second.second << ")\n";

    cout << "\nmap3:\n";
    for (auto &p : map3) cout << "(" << p.first.first << "," << p.first.second << ") -> " << p.second << "\n";

    /*
    Second way to print:
    auto it = map1.find(3);
    cout << *(it).second;

    auto it = map1.find(5);

    // This is the syntax
    auto it = map1.lower_bound(2);

    auto it = map1.upper_bound(3);
    */

    // erase, swap, size, empty, are same as previous STLs
}

int main() {
    explainMap();
    return 0;
}
