/*
    Program: Check if the sides create a rectangle
    Author: Abhay Yadav
    Date: 20/10/2026
*/

#include <bits/stdc++.h>
using namespace std;

int main(){
    int a, b, c, d;
    cout<<"Enter four sides: ";
    cin>>a>>b>>c>>d;
    if((a==b && c==d)||(a==c && b==d)||(a==d && c==b)) cout<<"YES";
    else cout<<"NO";
    return 0;
}