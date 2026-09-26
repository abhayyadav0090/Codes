#include <bits/stdc++.h>
using namespace std;

int main(){
    int x;
    cin>>x;

    // Find the total occurance of a x in a sorted array.
    // If it doesn't exists, print -1.
    // ind represents index
    int a[]={1, 4, 4, 4, 4, 9, 9, 10, 11};
    int n=9;

    cout<<"Total Occurances: ";

    int first=lower_bound(a, a+n, x) - a;
    if(first!=n && a[first]==x) first=first+0;
    else first=-1;

    int last = upper_bound(a, a+n, x) - a;
    last--; // upper_bound returns index of just greater element than x -> so to balance that ind--
    if(last>=0 && a[last]==x) last=last+0;
    else last=-1;

    if(first==-1 || last==-1) cout<<0;
    else cout<<last-first+1;
    
    return 0;
}