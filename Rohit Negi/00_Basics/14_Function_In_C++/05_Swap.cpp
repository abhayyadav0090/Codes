/*
    Program: Swap
    Author: Abhay Yadav
    Date: 18/10/2026
*/

#include <bits/stdc++.h>
using namespace std;

void Swap(int &a, int &b){
    int c = a;
    a = b;
    b = c;
}

int main(){
    int a, b;
    cin >> a >> b;
    cout << a << " " << b << endl;
    Swap(a, b);
    cout << a << " " << b << endl;
    return 0;
}