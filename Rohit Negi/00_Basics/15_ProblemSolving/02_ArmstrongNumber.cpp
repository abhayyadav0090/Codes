/*
    Program: Armstrong Number
    Author: Abhay Yadav
    Date: 19/10/2026
*/

// 0 1 2 3 4 5 6 7 8 9 153 370 371 407 1634 8208 9474 54748 92727 93084 ......

#include <iostream>
using namespace std;

// Integer power function to avoid floating-point inaccuracies
int power(int base, int exp) {
    int res = 1;
    for (int i = 0; i < exp; i++) {
        res *= base;
    }
    return res;
}

bool armstrong(int n) {
    if (n < 0) return false;
    if (n == 0) return true;

    int temp = n;
    int count = 0;
    while (temp > 0) {
        count++;
        temp /= 10;
    }

    temp = n;
    int ans = 0;
    while (temp > 0) {
        int digit = temp % 10;
        ans += power(digit, count);
        temp /= 10;
    }

    return (ans == n);
}

int main() {
    int num;
    cout << "Enter the Number to check: ";
    if (!(cin >> num)) {
        cout << "Invalid input.\n";
        return 1;
    }

    if (armstrong(num)) {
        cout << num << " is an Armstrong Number.\n";
    } else {
        cout << num << " is not an Armstrong Number.\n";
    }
    return 0;
}