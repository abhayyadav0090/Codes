#include <bits/stdc++.h>
using namespace std;

int main(){
    int x=5, y=10;
    // cin >> x >> y;
    cout << "Value of x: " << x << endl;
    cout << "Value of y: " << y << endl;

    // Datatypes
    // int, long, unsigned long, long long.
    // float, double, long double.
    // char, string, getline, bool.

    long xy = 1000000000;
    long yy= 2000000000;
    cout << "Value of xy: " << xy << endl;
    cout << "Value of yy: " << yy << endl;

    string s;
    cout<< "Enter a string (single word): "<<endl;
    cin >> s;
    cout << "Value of s: " << s << endl;

    cout<< "Enter a string (multiple words): ";
    getline(cin, s);
    cout << endl <<"Value of s: " << s << endl;

    char c='a';
    cout << "Value of c: " << c << endl;

    int age;
    cout << "Enter your age: ";
    cin >> age;
    if(age < 0){
        cout << "Invalid age!" << endl;
        cout << "Your age is: " << age << endl;
    }
    else if(age < 18){
        cout << "You are a minor." << endl;
        cout << "Your age is: " << age << endl;
    }
    else if(age < 60){
        cout << "You are an eligible adult." << endl;
        cout << "Your age is: " << age << endl;
    }
    else{
        cout << "You are a senior citizen." << endl;
        cout << "Your age is: " << age << endl;
    }

    

    return 0;
}