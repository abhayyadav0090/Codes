// Functions are set of code which performs something for you
// Functions are used to modularise code
// Functions are used to increse readability
// Functions are used to use same code multiple times
// types of Functions -> void, return, parameterised, non-parameterised

// take two numbers and print its sum

#include <bits/stdc++.h>
using namespace std;

int sum(int num1, int num2){ 
    int num3=num1+num2;
    return num3;
}

int main(){
    cout << "Enter two numbers: ";
    int num1, num2, num3;
    cin >> num1 >> num2;

    int minimum = min(num1, num2);
    int maximum = max(num1, num2);
    cout << "Entered numbers are: " << minimum << " " << maximum << endl;

    num3 = sum(num1, num2);
    cout << "Sum of the given numbers is: " << num3 << endl;
    return 0;
}