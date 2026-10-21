/*
    Program: Reverse the Num
    Author: Abhay Yadav
    Date: 19/10/2026
*/

#include <bits/stdc++.h>
using namespace std;

int reverse(int n){
    int sign = (n<0) ? -1 : 1;

    n = sign * n;

    int ans = 0;
    while(n){
        ans = ans*10 + n%10;
        n/=10;
    }
    return ans*sign;
}

int main(){
    int num;
    cout << "Enter The Number: ";
    cin >> num;
    int ans = reverse(num);
    cout << ans;
    return 0;
}