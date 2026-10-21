/*
    Program: Find the number of trailing zeroes in a factorial
    Author: Abhay Yadav
    Date: 20/10/2026
*/

#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cout<<"Enter the number: ";
    cin>>n;
    // 1 * 2 * 3 * 4 * 5 * 6 * 7 * 8 * 9 * 10 * ... * 15 * ... * 20 * ... * 25 * ... * 30 * ...
    // count -->> 1(5), 2(10), 3(15), 4(20), 6(25), 7(30), 8(35), 9(40), 10(45), 12(50), ..., 24(100), ..., 35(148), .....
    // divide the number whose fact we are calculating by 5, if quotient is less than 5 -->> that quotient is no. of trailing zeroes.
    // and if the quotient is greater  than or equal to five then divide the quotient by 5 and add the new quotient to the old one
    // and that will be the answer, and the process goes on until the final quotient is less than 5.
    
    int ans = 0;
    while (n >= 5) {
        n /= 5;
        ans = ans + n;
    }
    cout << ans;
    return 0;
}