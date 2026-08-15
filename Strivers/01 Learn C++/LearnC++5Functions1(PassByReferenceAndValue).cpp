// Functions are set of code which performs something for you
// Functions are used to modularise code
// Functions are used to increse readability
// Functions are used to use same code multiple times
// types of Functions -> void, return, parameterised, non-parameterised

#include <bits/stdc++.h>
using namespace std;

void printName(string name){ 
    cout << "hey " <<name << endl;
}

int main(){
    cout << "Enter your name:";
    string name;
    cin >> name;
    printName(name);

    cout << "Enter another Name: ";
    string name2;
    cin >> name2;
    printName(name2);

    return 0;
}