/*
Author: Abhay Yadav
Program: Basic of Vectors
Date: 27/08/2026
*/

#include <bits/stdc++.h>
using namespace std;

void explainVector(){
    vector<int> v;
    v.push_back(1);
    v.emplace_back(2);
    v.emplace_back(6);
    // emplace_back is faster than push_back function.

    vector<pair<int, int>> vect;
    vect.push_back({1,3});
    vect.emplace_back(1,2);

    vector<int> v1(5, 100);            // v1 is predefined with 5 instances of 100
    vector<int> v2(5);                 // v2 is predefined with 5 instances of 0 or any garbage values depending on compiler;
    vector<int> v3(5, 20);             // v3 is predefined with 5 instances of 20 -> {20, 20, 20, 20, 20}
    vector<int> v4(v3);                // v4 is another vector which is copy of v3 -> {20, 20, 20, 20, 20}

    // Here size of vectors is defined equal to 5 but it automatically increases with insertion of elements.

    vector<int> :: iterator anything = v.begin();
    // this iterator v.begin() points to memory location of first element;
    anything++;                         // increment moves the iterator to 2nd element so it prints the 2nd element in the vector.
    cout << *(anything) << " " << endl;

    vector<int> :: iterator abhay1 = v.end();  // This end iterator doesn't point to last element instead it points out of the vector. So to point to last element you have to use iterator--;
    // vector<int> :: iterator abhay2 = v.rend();   // This Reverse Iterator first reverses the vector then the iterator points to outside of end of reversed vector
    // vector<int> :: iterator abhay3 = v.rbegin(); // This Reverse Iterator first reverses the vector then the iterator points to first element of reversed vector

    cout << v[0] << " " << v.at(0) << endl;     // both v[0] and v.at[0] have same meaning -> they are pointing to first element of vector v.
    cout << v.back() << endl;

    // Different ways to print the vector
    for(vector<int> :: iterator it=v.begin(); it!=v.end(); it++){
        cout << *(it) << " ";
    }

    cout << "\n";
    
    for(auto it=v.begin(); it!=v.end(); it++){
        cout << *(it) << " ";
    }

    cout << endl;

    v={10, 20, 12, 23};          // Reassigning the values of vector v;

    for(auto it:v){
        cout << it << " ";
    }

    // To erase the data you can provide the address of the element to erase by providing the iterator pointing to that element
    v.erase(v.begin()+1); // erasing the second element that is 20.
    cout << endl; for(auto it:v) cout << it << " ";      // 10 12 23
    
    // erasing multiple elements at once
    v={10, 20, 12, 23, 35};          // Reassigning the values of vector v;
    v.erase(v.begin()+2, v.begin()+4); // erasing the elements from third element to 5th element but 5th is not included that is 12 and 23.
    cout << endl; for(auto it:v) cout << it << " ";      // 10 20 35

    // Insert function
    // vector<int>v{2,100};
    v={2, 100};
    v.insert(v.begin(), 300); // inserting 300 at the beginning of vector v
    v.insert(v.begin()+1, 2, 10); // inserting 2 instances of 10 at the second position of vector v
    vector<int> copy(2, 50); // creating a vector copy with 2 instances of 50
    v.insert(v.begin(), copy.begin(), copy.end()); // inserting the vector copy at the beginning of vector v
    
    cout << endl; 
    for(auto it:v) cout << it << " ";      // 50 50 300 10 10 2 100
    cout << endl;
    cout << "Size: " << v.size() << endl; // Size of vector v

    cout << "Capacity: " << v.capacity(); // Capacity of vector v

    v.pop_back(); // removes the last element of vector v

    v.swap(v1); // swaps the contents of vector v and v1
    cout << endl; for(auto it:v) cout << it << " ";      // 100 100 100 100 100
    cout << endl; for(auto it:v1) cout << it << " ";      // 50 50 300 10 10 2
    v1.swap(v); // swaps the contents of vector v1 and v
    cout << endl; for(auto it:v) cout << it << " ";      // 50 50 300 10 10 2
    cout << endl; for(auto it:v1) cout << it << " ";      // 100 100 100 100 100

    v.clear(); // clears the vector v
    cout << endl << "Is v empty? " << v.empty() << endl; // returns true if vector v is empty else false
}

int main(){
    explainVector();
    return 0;
}