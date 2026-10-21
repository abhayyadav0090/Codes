/*
    Program: Nim Game
    Author: Abhay Yadav
    Date: 21/10/2026
*/

#include <bits/stdc++.h>
using namespace std;

int main(){
    int N;
    cout<<"Enter the target numebr:(i will start the game first): ";
    cin>>N;
    if(N%4!=0) cout<<"I won";
    else cout<<"You won";
    return 0;
}