/*
Author: Abhay Yadav
Program: Basic of Lists
Date: 07/09/2026
*/

#include <bits/stdc++.h>
using namespace std;

void explainList(){
    list<int> list;
    list.push_back(2);              // 2
    list.emplace_back(4);           // 2 4
    for(auto it:list){ cout << it << " "; } cout << endl;

    list.push_front(5);             // 5 2 4
    for(auto it:list){ cout << it << " "; } cout << endl;

    list.emplace_front(6);          // 6 5 2 4
    for(auto it:list){ cout << it << " "; } cout << endl;

    list.emplace_front(7);          // 7 6 5 2 4
    for(auto it:list){ cout << it << " "; } cout << endl;

    // emplace_back is faster than push_back function in vectors but lists have a different implementation.
    // insert and erase are faster in lists than vectors because of the way they are implemented. In lists, elements are not stored in contiguous memory locations like vectors. Instead, each element is stored in a separate node that contains pointers to the previous and next nodes. This allows for efficient insertion and deletion of elements at any position in the list without the need to shift other elements, which is required in vectors. As a result, insert and erase operations can be performed in constant time O(1) for lists, while they may take linear time O(n) for vectors due to the need to shift elements.
    // insert function take too much time in vectors because it may require shifting elements to accommodate the new element, especially if the insertion is not at the end of the vector. In contrast, lists can insert elements in constant time O(1) by simply adjusting pointers, making them more efficient for frequent insertions and deletions.

    // Rest of the functions are same as vectors 
    // like size(), front(), back(), empty(), clear(), begin(), end(), rbegin(), rend(), swap() etc.
}

int main(){
    explainList();
    return 0;
}