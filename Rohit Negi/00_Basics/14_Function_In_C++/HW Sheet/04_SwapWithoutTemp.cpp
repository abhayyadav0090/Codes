/*
    Program: Swap without temp
    Author: Abhay Yadav
    Date: 19/10/2026
*/

#include <bits/stdc++.h>
using namespace std;

void Swap(int &a, int &b){
    a = a + b;
    b = a - b;      // b = a + b - b =>> b = a 
    a = a - b;      // a = a + b - a =>> a = b
}

int main(){
    int a, b;
    cin >> a >> b;
    cout << a << " " << b << endl;
    Swap(a, b);
    cout << a << " " << b << endl;
    return 0;
}