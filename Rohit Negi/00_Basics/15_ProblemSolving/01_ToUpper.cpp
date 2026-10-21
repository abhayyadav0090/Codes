/*
    Program: Write a function to convert 'a' to 'A'
    Author: Abhay Yadav
    Date: 19/10/2026
*/

#include <bits/stdc++.h>
using namespace std;

char convert(char name){
    int ans = name-'a'+'A';
    return ans;
}

int main(){
    char name;
    cout<<"Enter the character: ";
    cin>>name;
    cout<<convert(name);
    return 0;
}