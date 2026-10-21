/*
Program: Number System Conversion
Author: Abhay Yadav
Date: 27/09/2026
*/

#include <bits/stdc++.h>
using namespace std;

int main(){
    // Decimal to Binary
    {int num;
    cout<<"Enter a Decimal number to convert into Binary : ";
    cin>>num;
    int temp=num;
    int rem=0, i=0;
    string binary = "";
    // also while(num){}
    while (num > 0) {
        rem = num % 2;
        // Bitwise operator can also be used -> ⭐{rem=num&1;}
        binary = char('0' + rem) + binary;  // prepend bit
        num /= 2;
    }
    cout << temp << " is equal to " << binary << " in Binary" << endl;}

    // Decimal to Binary
    {int num;
    cout<<"Enter a Decimal number to convert into Binary : ";
    cin>>num;
    int temp=num;
    int rem=0, ans=0, multi=1;
    while (num > 0) {
        rem = num % 2;
        num/=2;
        ans=rem*multi+ans;
        multi*=10;
    }
    cout << temp << " is equal to " << ans << " in Binary" << endl;}

    // Binary to Decimal
    {int num;
    cout<<"Enter a Binary number to convert into Decimal : ";
    cin>>num;
    int temp=num;
    int digit=0, ans=0, i=0;
    while(num>0){
        digit=num%10;
        num/=10;
        ans=digit*pow(2, i++)+ans;
    }
    cout<<temp<<" is equal to "<<ans<<" in Decimal";}
    return 0;
}

/*
    A variable multi can be used in place of pow function
    initialise multi by 1 then multiply it by 10 again and again
*/