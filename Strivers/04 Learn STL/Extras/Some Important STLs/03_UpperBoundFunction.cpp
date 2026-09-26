#include <bits/stdc++.h>
using namespace std;

int main(){

    // upper_bound function
    cout<<"Upper Bound Function"<<endl;
    int a[]={1, 4, 5, 6, 9, 9};
    // int ind = upper_bound(a.begin(), a.end(), x)-a.begin();
    // a.begin() -> a;
    // a.end() -> a+n; where n = number of elements in array
    int ind = upper_bound(a, a+6, 4)-a;
    cout<<ind<<endl;                     // return index of element just greater than the element x -> 2
    ind = upper_bound(a, a+6, 7)-a;
    cout<<ind<<endl;                     // x doesn't exist so returns the index of just graeter than element -> 4
    ind = upper_bound(a, a+6, 10)-a;
    cout<<ind<<endl;                     // x doesn't exist also next greater element also doesn't exist so returned the index of last element +1;
    ind = upper_bound(a, a+6, 19)-a;
    cout<<ind<<endl;
    cout<<endl;

    return 0;
}