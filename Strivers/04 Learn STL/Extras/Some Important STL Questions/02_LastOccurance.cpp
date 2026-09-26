#include <bits/stdc++.h>
using namespace std;

int main(){
    int x;
    cin>>x;

    // Question 2
    // Find the last occurance of a x in a sorted array.
    // If it doesn't exists, print -1.
    // ind represents index
    cout<<"Last occurance: ";
    int a[]={1, 4, 4, 4, 4, 9, 9, 10, 11};
    int n=9;
    int ind = upper_bound(a, a+n, x) - a;
    ind--; // upper_bound returns index of just greater element than x -> so to balance that ind--
    if(ind>=0 && a[ind]==x) cout<<ind;
    else cout << -1;

    return 0;
}