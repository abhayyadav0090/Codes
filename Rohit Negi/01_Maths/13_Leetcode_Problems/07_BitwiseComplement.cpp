/*
    Program: Bitwise Complement
    Author: Abhay Yadav
    Date: 17/10/2026
*/

#include <bits/stdc++.h>
using namespace std;

int bitwiseComplement(int n) {
    if(n==0) return 1;
    int ans=0, multi=1;
    while(n){
        int rem=n%2;
        if(rem==0) ans+=multi;
        multi*=2;
        n/=2;
    }
    return ans;
}

int main(){
    int num = 0;
    cout << "Enter a number: ";
    cin >> num;
    int ans = bitwiseComplement(num);
    cout << ans;
    return 0;
}