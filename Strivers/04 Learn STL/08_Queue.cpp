/*
Author: Abhay Yadav
Program: Basic of Queue
Date: 11/09/2026
*/

#include <bits/stdc++.h>
using namespace std;

void explainQueue(){
   
    // FIFO -> First In First Out

    queue<int> Q;
    Q.push(1);         // {1}
    Q.push(2);         // {1, 2}
    Q.emplace(4);      // {1, 2, 4}

    Q.back() += 5;     // Adding 5 to last element of Queue Q

    // Q is {1, 2, 9}

    cout << "Element at Back : " << Q.back() << endl;  // prints 9
    cout << "Element at Front : " << Q.front() << endl; // prints 1

    Q.pop();           // {2, 9}

    cout << "Element at Front after Pop : " << Q.front() << endl; // prints 2

    // other functions like size, swap and empty are same as stack

    cout << "Size of Queue : " << Q.size() << endl;      // 2 -> {2, 9}

    // Swapping Operation
    queue<int> q1, q2;
    q1.push(1), q2.push(2);
    cout << endl << "Before Swapping -> q1 back : " << q1.back() << " and q2 back : " << q2.back();
    q1.swap(q2);
    cout << endl << "After Swapping -> q1 back : " << q1.back() << " and q2 back : " << q2.back();

    q1.pop();

    // Empty Function
    cout << endl << "Is the Queues Q and q1 are Empty ?" << endl << "Q: " << Q.empty() << " and q1: " << q1.empty();

}

int main(){
    explainQueue();
    return 0;
}