// Functions are set of code which performs something for you
// Functions are used to modularise code
// Functions are used to increse readability
// Functions are used to use same code multiple times
// types of Functions -> void, return, parameterised, non-parameterised

#include <bits/stdc++.h>
using namespace std;

// Pass by Value
void doSomething(int num){
    cout << num << endl;
    num += 5;
    cout << num << endl;
    num += 5;
    cout << num << endl;
}

int main(){
    int num = 10;
    doSomething(num); // Copy of num goes to function but the original num is still same;
    cout << num << endl;
    return 0;
}