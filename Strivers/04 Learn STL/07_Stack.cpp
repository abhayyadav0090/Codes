/*
Author: Abhay Yadav
Program: Basic of Stack
Date: 07/09/2026
*/

#include <bits/stdc++.h>
using namespace std;

void explainStack(){

    // LIFO -> Last In First Out
    // Pop, Push, Top -> all these operations are of O(1) running time complexity 

    stack<int> stack1;
    stack1.push(1);             // {1}
    stack1.push(2);             // {2, 1}
    stack1.push(3);             // {3, 2, 1}
    stack1.push(3);             // {3, 3, 2, 1}
    stack1.emplace(5);          // {5, 3, 3, 2, 1}

    cout << "Top element of stack1: " << stack1.top() << endl; // 5
    stack1.pop(); // Removes the top element
    cout << "Top element of stack1 after pop: " << stack1.top() << endl; // 3

    cout << "Size of stack1: " << stack1.size() << endl; // 4

    cout << "Is stack1 empty: " << stack1.empty() << endl; // 0 (false)

    // emplace_back is faster than push_back function in vectors but lists have a different implementation.
    // insert and erase are faster in lists than vectors because of the way they are implemented. In lists, elements are not stored in contiguous memory locations like vectors. Instead, each element is stored in a separate node that contains pointers to the previous and next nodes. This allows for efficient insertion and deletion of elements at any position in the stack1 without the need to shift other elements, which is required in vectors. As a result, insert and erase operations can be performed in constant time O(1) for lists, while they may take linear time O(n) for vectors due to the need to shift elements.
    // insert function take too much time in vectors because it may require shifting elements to accommodate the new element, especially if the insertion is not at the end of the vector. In contrast, lists can insert elements in constant time O(1) by simply adjusting pointers, making them more efficient for frequent insertions and deletions.

    // Rest of the functions are same as vectors 
    // like size(), front(), back(), empty(), clear(), begin(), end(), rbegin(), rend(), swap() etc.

    // Swap Function
    stack<int> stack2;
    stack1.push(1); stack1.push(1); stack1.push(1); stack1.push(1); stack1.push(1);
    stack2.push(2); stack2.push(2); stack2.push(2); stack2.push(2); stack2.push(2);
    cout << endl << "Before Swapping -> Stack1 top : " << stack1.top() << " and Stack2 top : " << stack2.top();
    stack1.swap(stack2);
    cout << endl << "After Swapping -> Stack1 top : " << stack1.top() << " and Stack2 top : " << stack2.top();
    
}

int main(){
    explainStack();
    return 0;
}