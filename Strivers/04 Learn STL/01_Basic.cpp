/*
Author: Abhay Yadav
Program: Structure of a C++ program
Date: 27/08/2026
*/

#include <bits/stdc++.h>
// Library that includes all standard C++ libraries
// Libraries are collections of pre-written code that provide additional functionality to a programming language. In C++, libraries contain classes, functions, and other resources that can be used to perform specific tasks without having to write the code from scratch.
using namespace std;
// The using namespace std; directive allows us to use names from the standard library (std) without having to prefix them with std:: every time. For example, we can write cout instead of std::cout.

int sum(int a, int b) {
    // int sum(int a, int b) is a function that takes two integer parameters, a and b, and returns their sum. The return type of the function is int, which means it will return an integer value.
    // Function to calculate the sum of two integers
    return a + b;
}

int main(){
    // The main() function is the entry point of a C++ program. It is where the execution of the program begins.
    int x, y;
    // Declare two integer variables, x and y, to store user input.
    cout << "Enter two integers: " << endl;
    // Prompt the user to enter two integers.
    cin >> x >> y;
    // Read the two integers from standard input (keyboard) and store them in variables x and
    cout << "The sum of " << x << " and " << y << " is: " << sum(x, y) << endl;
    // Call the sum() function with x and y as arguments, and print the result to
    return 0;
}