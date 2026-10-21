/*
    Program: Cube
    Author: Abhay Yadav
    Date: 19/10/2026
*/

#include <bits/stdc++.h>
using namespace std;

long long cube(int n) {return n*n*n;}

int main(){
    int num = 0;
    cout << "Enter the number: ";
    cin >> num;
    long long ans = cube(num);
    cout << ans;
    return 0;
}