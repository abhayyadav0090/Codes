/*
    Program: Common Functions in C++
    Author: Abhay Yadav
    Date: 17/10/2026
*/

#include <bits/stdc++.h>
using namespace std;

long long fact(int n)
{
    if (n == 0 || n == 1)
        return 1;
    return n * fact(n - 1);
}

bool isPrime(int n)
{
    if (n < 2)
        return 0;
    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
            return 0;
    }
    return 1;
}

void testcases(){
    int num;
    cout << "Enter a Number: ";
    cin >> num;

    bool check = isPrime(num);
    if (check == 0)
    {
        cout << num << " is Not a Prime Number!";
    }
    else
        cout << num << " is a Prime Number!";

    cout << endl;

    long long ans = fact(num);
    cout << "Fact of " << num << " is " << ans;

    cout << endl;
}

int sum(int a, int b){
    return a+b;
}

int mult(int a, int b){
    return a*b;
}

void testcases2(){
    int num1, num2;
    cout << "Enter first Number: ";
    cin >> num1;
    cout << "Enter second Number: ";
    cin >> num2;

    cout << "Sum of "<<num1 <<" and "<<num2<<" is "<<sum(num1, num2)<< endl;
    cout << "Multiplication of "<<num1 <<" and "<<num2<<" is "<<mult(num1, num2)<< endl;
}

int main()
{
    int t;
    cout<<"Enter no. of Testcases: ";
    cin>>t;
    while(t--) {cout<<endl; testcases(); cout<<endl; testcases2();}
    // ans = sum(a, b);
    // cout << sum(a, b);    
    return 0;
}