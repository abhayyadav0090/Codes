// Functions are set of code which performs something for you
// Functions are used to modularise code
// Functions are used to increse readability
// Functions are used to use same code multiple times
// types of Functions -> void, return, parameterised, non-parameterised

#include <bits/stdc++.h>
using namespace std;

/*
// Pass by Value
void doSomething(string s){
    cout << s << endl;
    s[0] = 'T';
    cout << s << endl;
}

int main(){
    string s = "Raj";
    doSomething(s); // Copy of num goes to function but the original num is still same;
    cout << s << endl;
    return 0;
}

Output-->
Raj
Taj
Raj
*/ 

// Pass by Reference
void doSomething(string &s){
    cout << s << endl;
    s[0] = 'T';
    cout << s << endl;
}

int main(){
    string s = "Raj";
    doSomething(s); // Copy of num goes to function but the original num is still same;
    cout << s << endl;
    return 0;
}

/*
Output-->
Raj'
Taj
Taj
*/