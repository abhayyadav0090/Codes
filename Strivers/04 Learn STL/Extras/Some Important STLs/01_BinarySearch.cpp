#include <bits/stdc++.h>
using namespace std;

int main(){

    // Binary Search
    cout<<"Binary Search Function"<<endl;
    // Check if x exists in the sorted array or not ?
    int a[]={1, 4, 5, 8, 9};
    bool res = binary_search(a, a+5, 3);
    cout<<res<<endl;                        // 0
    res=binary_search(a, a+5, 4);
    cout<<res<<endl;                        // 1

    cout<<endl;

    return 0;
}