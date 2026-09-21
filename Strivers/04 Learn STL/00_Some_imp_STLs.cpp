#include <bits/stdc++.h>
using namespace std;

int main(){
    {
        // Binary Search
        cout<<"Binary Search Function"<<endl;
        // Check if x exists in the sorted array or not ?
        int a[]={1, 4, 5, 8, 9};
        bool res = binary_search(a, a+5, 3);
        cout<<res<<endl;                        // 0
        res=binary_search(a, a+5, 4);
        cout<<res<<endl;                        // 1

        cout<<endl;
    }
    {
        // Lower Bound Function
        cout<<"Lower Bound Function"<<endl;
        int a[]={1, 4, 5, 6, 9, 9};

        int ind = lower_bound(a, a+6, 4)-a;   // index of 4 is 1 -> 1
        cout<<ind<<endl;

        ind = lower_bound(a, a+6, 7)-a;       // 7 doesn't exist -> so index immediate greater 9 -> 4
        cout<<ind<<endl;

        ind = lower_bound(a, a+6, 10)-a;      // 10 doesn't exist also no greater element exist -> index after last element -> 6
        cout<<ind<<endl;

        // int ind = lower_bound(a.begin, a.end(), x)-a.begin();

        cout<<endl;
    }
    {
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
    }
    return 0;
}