/*
Author: Abhay Yadav
Program: Count Set Bits
Date: 26/09/2026
*/

#include <bits/stdc++.h>
using namespace std;

int main(){
    
    // Another important STL
    // it counts number of setbits (1s) in the binary of given decimal number

    for(int i=4; i<=7; i++){
        int num1 = i;
        int cnt1 = __builtin_popcount(num1);  // count set bits in num
        cout << "Number of set bits in " << num1 << " = " << cnt1 << endl;
    }

    long long num2 = 165786578687;
    int cnt2 = __builtin_popcountll(num2);
    cout << "Number of set bits in " << num2 << " = " << cnt2 << endl;

    return 0;
}