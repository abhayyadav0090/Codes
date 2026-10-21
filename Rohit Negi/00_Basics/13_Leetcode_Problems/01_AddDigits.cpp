/*
    Program: Add Digit (258)
    https://leetcode.com/problems/add-digits/
    Author: Abhay Yadav
    Date: 28/09/2026
*/

#include <bits/stdc++.h>
using namespace std;

int main(){
    int num=0;
    cout<<"Enter A Number: ";
    cin>>num;

    while(num>9){
        int rem=0, sum=0;
        while(num!=0){
            rem=num%10;
            sum+=rem;
            num/=10;
        }
        num=sum;
        cout<<num<<endl;
    }
    cout<<"So, Final Sum Is: "<<num;

    return 0;
}