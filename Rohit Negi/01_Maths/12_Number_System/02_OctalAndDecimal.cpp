/*
Program: Number System Conversion
Author: Abhay Yadav
Date: 27/09/2026
*/

#include <bits/stdc++.h>
using namespace std;

int main(){
    // Decimal to Octal
    {int num;
    cout<<"Enter a Decimal number to convert into Octal : ";
    cin>>num;
    int temp=num;
    int rem=0, ans=0, multi=1;
    // also while(num){}
    while (num > 0) {
        rem = num % 8;
        ans = rem*multi+ans;
        num /= 8;
        multi*=10;
    }
    cout << temp << " is equal to " << ans << " in Octal" << endl;}

    // Octal to Decimal
    {int num;
    cout<<"Enter a Octal number to convert into Decimal : ";
    cin>>num;
    int temp=num;
    int digit=0, ans=0, i=0;
    while(num>0){
        digit=num%10;
        num/=10;
        ans=digit*pow(8, i++)+ans;
    }
    cout<<temp<<" is equal to "<<ans<<" in Octal";}
    return 0;
}

/*
    A variable multi can be used in place of pow function
    initialise multi by 1 then multiply it by 10 again and again
*/