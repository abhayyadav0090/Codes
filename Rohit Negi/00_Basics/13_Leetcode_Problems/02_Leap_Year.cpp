/*
    Program: Leap Year
    https://www.geeksforgeeks.org/problems/leap-year0943/1
    Author: Abhay Yadav
    Date: 28/09/2026
*/

#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cout<<"Enter the year: ";
    cin>>n;
    if(n%400==0) cout<<"YES";
    else if((n%4==0)&&(n%100!=0)) cout<<"YES";
    else cout<<"NO";
    return 0;
}