/*
Author: Abhay Yadav
Program: Print all Permutations
Date: 26/09/2026
*/

#include <bits/stdc++.h>
using namespace std;

int main(){

    string s="132";
    string temp=s;
    int count=0;
    do{
        cout << s << " ";
        count++;
    } while(next_permutation(s.begin(), s.end()));
    cout<<endl<<"Total numbers using digits of "<<temp<<" can be formed : "<<count<<endl;
    
    cout<<endl;

    s="1234";
    temp=s;
    count=0;
    do{
        cout << s << " ";
        count++;
    } while(next_permutation(s.begin(), s.end()));
    cout<<endl<<"Total numbers using digits of "<<temp<<" can be formed : "<<count<<endl;

    cout<<endl;

    s="ABHAY";
    temp=s;
    count=0;
    do{
        cout << s << " ";
        count++;
    } while(next_permutation(s.begin(), s.end()));
    cout<<endl<<"Total words using letters of "<<temp<<" can be formed : "<<count<<endl;

    return 0;
}