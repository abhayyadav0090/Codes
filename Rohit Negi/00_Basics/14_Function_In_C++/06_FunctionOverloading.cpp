/*
    Program: Function Overloading
    Author: Abhay Yadav
    Date: 19/10/2026
*/

#include <bits/stdc++.h>
using namespace std;

void Swap(int &a, int &b){
    int c = a;
    a = b;
    b = c;
}

void Swap(float &a, float &b){
    float c = a;
    a = b;
    b = c;
}

int main(){
    int a, b;
    cin >> a >> b;
    cout << a << " " << b << endl;
    Swap(a, b);
    cout << a << " " << b << endl;
    float c, d;
    cin >> c >> d;
    cout << c << " " << d << endl;
    Swap(c,d);
    cout << c << " " << d << endl;
    return 0;
}