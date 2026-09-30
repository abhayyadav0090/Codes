/*
    Program: Power Of 4
    Author: Abhay Yadav
    Date: 30/09/2026
*/

#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cout<<"Enter a Number to check if it is power of 4: ";
    cin>>n;
    if(n <= 0) {cout<<"No"; return 0;}
    while(n % 4 == 0) {
        n /= 4;
    }
    if(n==1) cout << "Yes";
    else cout<<"No";
    return 0;
}
        