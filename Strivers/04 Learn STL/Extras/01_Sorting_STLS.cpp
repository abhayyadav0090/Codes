/*
Author: Abhay Yadav
Program: Reverse Sorting
Date: 26/09/2026
*/

#include <bits/stdc++.h>
using namespace std;

bool comp(pair<int, int> p1, pair<int, int> p2){
    // p1->{a, b} and p2->{c, d}
    if(p1.second < p2.second) return true;
    if(p1.second > p2.second) return false;
    // if condtion is false then comparator internally instruct to swap the elements
    
    // the only remaining condition is that they are same
    // if second element is same then we want descending order
    if(p1.first > p2.first) return true; // a > c means already in descending order
    return false; // if condition are not true
}

void explainExtra(){
    int n=4;
    int a[n]={1, 5, 3, 2};
    sort(a, a+n);      // {1, 2, 3, 5}
    sort(a+2, a+4);    // to sort the specific portion
    /*
    a[n]={1, 5, 3, 2}.
    . reprent the position of iterator, last iterator which is out of the array
    sort(a, a+4);
    */

    vector<int> v;
    sort(v.begin(), v.end());

    // to sort in reverse order that is descending order
    // sort(a, a+n, greater<int>); -> sort(a, a + n, greater<int>());
    {
        int arr1[]={1, 5, 6, 2, 3, 5, 6, 0, 9, 2};
        int n = sizeof(arr1) / sizeof(arr1[0]);
        sort(arr1, arr1 + n, greater<int>());  // ✅ note the parentheses
        for (int i = 0; i < n; i++) cout << arr1[i] << " ";
    }

    {   
        // Sorting a array according to your choice -> custom
        pair<int, int> a[]={{1, 2}, {2, 1}, {4, 1}};
        // sort it according to second element
        // if second element is same, then sort it according to
        // first element but in descending order

        sort(a, a+3, comp);
        // comp is self written comparator nothing but a boolean function
        // {{4, 1}, {2, 1}, {1, 2}}
    }
}

int main(){
    explainExtra();
    return 0;
}
