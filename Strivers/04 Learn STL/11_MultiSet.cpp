/*
Author: Abhay Yadav
Program: Basic of MultiSet
Date: 25/09/2026
*/

#include <bits/stdc++.h>
using namespace std;

void explainMultiSet(){

    multiset<int> ms;
    ms.insert(1);      // {1}
    ms.insert(1);      // {1, 1}
    ms.insert(1);      // {1, 1, 1}
    ms.insert(1);      // {1, 1, 1, 1}

    ms.erase(1);       // all 1's erased

    int cnt = ms.count(1);

    // only a single 1 is erased
    ms.erase(ms.find(1));

    ms.erase(ms.find(1), next(ms.find(1), 2));

    //rest all function same as set

    // {1, 2, 3, 4, 5}
    auto it1 = ms.find(3);

    // {1, 2, 3, 4, 5}
    auto it2 = ms.find(6);

    // {1, 4, 5}
    ms.erase(5); // erases 5 // takes logarithmic time

    cnt=ms.count(1);     // will give either 0 or 1 -> As set contains unique elements 
    cout << cnt;

    auto it3 = ms.find(3);
    ms.erase(it3);            // it takes constant time;

    // {1, 2, 3, 4, 5}
    auto it4=ms.find(2);
    auto it5=ms.find(4);
    ms.erase(it4, it5);      // After erase {1, 4, 5}  [first, last)

    // lower_bound() and upper_bound() function works in the same way
    // As in vector it does.

    // This is the syntax
    auto it6 = ms.lower_bound(2);
    auto it7 = ms.upper_bound(3);
    
}

int main(){
    explainMultiSet();
    return 0;
}