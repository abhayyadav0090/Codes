/*
    Program: Power Of 3
    Author: Abhay Yadav
    Date: 30/09/2026
*/

#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cout<<"Enter a Number to check if it is power of 3: ";
    cin>>n;
    if(n <= 0) {cout<<"No"; return 0;}
    while(n % 3 == 0) {
        n /= 3;
    }
    if(n==1) cout << "Yes";
    else cout<<"No";
    return 0;
}
        