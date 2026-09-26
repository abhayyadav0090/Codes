#include <bits/stdc++.h>
using namespace std;

int main(){

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
    
    return 0;
}