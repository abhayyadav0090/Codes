/*
    Program: Exchange the values
    Author: Abhay Yadav
    Date: 19/10/2026
*/

#include <bits/stdc++.h>
using namespace std;

void exchange(int &a, int &b, int &c){
    int temp = b;
    b = a;
    a = c;
    c = temp;
}

int main(){
    int a, b, c;
    cout << "Enter Three numbers : ";
    cin >> a >> b >> c;
    exchange(a, b, c);
    cout << a << " " << b << " " << c;
    return 0;
}