/*
Program: Number System Conversion
Author: Abhay Yadav
Date: 27/09/2026
*/

#include <bits/stdc++.h>
using namespace std;

int main(){

    // Binary to Octal
    {// Binary to Decimal
    int num;
    cout<<"Enter a Binary number to convert into Octal : ";
    cin>>num;
    int temp=num;
    int digit=0, ans=0, i=0;
    while(num>0){
        digit=num%10;
        num/=10;
        ans=digit*pow(2, i++)+ans;
    }
    cout<<temp<<" is equal to "<<ans<<" in Decimal"<<endl;

    // Decimal to Octal
    num=ans; ans=0;
    int rem=0, multi=1;
    // also while(num){}
    while (num > 0) {
        rem = num % 8;
        ans = rem*multi+ans;
        num /= 8;
        multi*=10;
    }
    cout << temp << " is equal to " << ans << " in Octal" << endl;}

    // Octal to Binary
    {// Octal to Decimal
    int num;
    cout<<"Enter a Octal number to convert into Binary : ";
    cin>>num;
    int temp=num;
    int digit=0, ans=0, i=0;
    while(num>0){
        digit=num%10;
        num/=10;
        ans=digit*pow(8, i++)+ans;
    }
    cout<<temp<<" is equal to "<<ans<<" in Decimal"<<endl;

    // Decimal to Binary
    num=ans; ans=0;
    int rem=0, multi=1;
    while (num > 0) {
        rem = num % 2;
        num/=2;
        ans=rem*multi+ans;
        multi*=10;
    }
    cout << temp << " is equal to " << ans << " in Binary" << endl;}

    return 0;
}