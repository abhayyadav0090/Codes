#include <bits/stdc++.h>
using namespace std;

int main(){
        int x;
        cin>>x;
    {
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

        cout<<endl;
    }
    {
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

        cout<<endl;
    }
    {
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

        cout<<endl;
    }
    {
        
    }
    return 0;
}