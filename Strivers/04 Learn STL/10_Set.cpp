/*
Author: Abhay Yadav
Program: Basic of Sets
Date: 21/09/2026
*/

#include <bits/stdc++.h>
using namespace std;

void explainSet(){

    set<int> st;
    st.insert(1);      // {1}
    st.emplace(2);     // {1, 2}
    st.insert(2);      // {1, 2}
    st.insert(4);      // {1, 2, 4}
    st.insert(3);      // {1, 2, 3, 4}

    // Functionality of insert in vector can be used also, that only increases efficiency

    // begin(), end(), rbegin(), rend(), size()
    // empty() and swap() are same as those of above

    // {1, 2, 3, 4, 5}
    auto it1 = st.find(3);

    // {1, 2, 3, 4, 5}
    auto it2 = st.find(6);

    // {1, 4, 5}
    st.erase(5); // erases 5 // takes logarithmic time

    int cnt=st.count(1);     // will give either 0 or 1 -> As set contains unique elements 
    cout << cnt;

    auto it3 = st.find(3);
    st.erase(it3);            // it takes constant time;

    // {1, 2, 3, 4, 5}
    auto it4=st.find(2);
    auto it5=st.find(4);
    st.erase(it4, it5);      // After erase {1, 4, 5}  [first, last)

    // lower_bound() and upper_bound() function works in the same way
    // As in vector it does.

    // This is the syntax
    auto it6 = st.lower_bound(2);
    auto it7 = st.upper_bound(3);
    
}

int main(){
    explainSet();
    return 0;
}