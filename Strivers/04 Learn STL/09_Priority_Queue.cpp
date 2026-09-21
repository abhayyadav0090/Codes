/*
Author: Abhay Yadav
Program: Basic of Priority Queue
Date: 21/09/2026
*/

#include <bits/stdc++.h>
using namespace std;

void explainPQ(){

    // Maximum Heap
    priority_queue<int> pq;
    pq.push(5);         // {5}
    pq.push(2);         // {5, 2}
    pq.push(8);         // {8, 5, 2}
    pq.emplace(10);     // {10, 8, 5, 2}pq.back() += 5;     // Adding 5 to last element of Queue pq

    cout << pq.top() << endl; // prints 10

    pq.pop();           // {8, 5, 2}

    cout << "Element at Front after Pop : " << pq.top() << endl; // prints 2

    // other functions like size, swap and empty are same as stack

    cout << "Size of Queue : " << pq.size() << endl;      // 2 -> {2, 9}

    // Swapping Operation
    priority_queue<int> q1, q2;
    q1.push(1), q2.push(2);
    cout << endl << "Before Swapping -> q1 back : " << q1.top() << " and q2 back : " << q2.top();
    q1.swap(q2);
    cout << endl << "After Swapping -> q1 back : " << q1.top() << " and q2 back : " << q2.top();

    q1.pop();

    // Empty Function
    cout << endl << "Is the Queues pq and q1 are Empty ?" << endl << "pq: " << pq.empty() << " and q1: " << q1.empty();


    // Minimum Heap
    priority_queue<int, vector<int>, greater<int>> pq;
    pq.push(5);         // {5}
    pq.push(2);         // {2, 5}
    pq.push(8);         // {2, 5, 8}
    pq.emplace(10);     // {2, 5, 8, 10}

    cout << pq.top() << endl;  // prints 2
}

int main(){
    explainPQ();
    return 0;
}