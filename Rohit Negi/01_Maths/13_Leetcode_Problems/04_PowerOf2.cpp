/*
    Program: Power Of 2
    Author: Abhay Yadav
    Date: 30/09/2026
*/

#include <bits/stdc++.h>
using namespace std;

int main(){
    int x;
    cout<<"Enter a Number to check if it is power of 2: ";
    cin>>x;
    while(x!=1){
        if(x%2==1) {cout << "No"; return 0;}
        else x/=2;
    }
    cout << "Yes";
    return 0;
}