/*
    Program: Pass By Value
    Author: Abhay Yadav
    Date: 18/10/2026
*/

#include <bits/stdc++.h>
using namespace std;

void Inc(int n){
    n++;
}

int main(){
    int a = 10;
    Inc(a);
    cout <<  a;
    return 0;
}