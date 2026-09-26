#include <bits/stdc++.h>
using namespace std;

int main(){
    int x;
    cin>>x;

    // Question 1
    // Find the first occurance of a x in a sorted array.
    // If it doesn't exists, print -1.
    // ind represents index
    cout << "First occurance: ";
    int a[]={1, 4, 4, 4, 4, 9, 9, 10, 11};
    int n=9;
    int ind = lower_bound(a, a+n, x) - a;
    if(ind!=n && a[ind]==x) cout<<ind;
    else cout << -1;

    return 0;
}