/*
    Program: Basic functions
    Author: Abhay Yadav
    Date: 18/10/2026
*/

#include <bits/stdc++.h>
using namespace std;

int fact(int n=3){
    if(n==0 || n==1) return 1;
    return n * fact(n-1);
}

int main(){
    // Default parameter
    cout << fact();                 // 6
    return 0;
}