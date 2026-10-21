/*
    Program: Find nCr (Combination) using Function
    Author: Abhay Yadav
    Date: 19/10/2026
*/

#include <iostream>
using namespace std;

// Function to calculate nCr efficiently without early integer overflow
long long nCr(int n, int r) {
    // Edge case 1: r out of bounds
    if (r < 0 || r > n) {
        return 0;
    }
    
    // Edge case 2: Base values
    if (r == 0 || r == n) {
        return 1;
    }

    // Optimization: nCr == nC(n - r)
    if (r > n - r) {
        r = n - r;
    }

    long long result = 1;

    // Iterative multiplication and division
    for (int i = 1; i <= r; i++) {
        result = result * (n - i + 1);
        result = result / i; // Always divides evenly at each step
    }

    return result;
}

int main() {
    int n = 0, r = 0;

    cout << "Enter n and r: ";
    if (!(cin >> n >> r)) {
        cout << "Invalid input.\n";
        return 1;
    }

    long long ans = nCr(n, r);
    cout << "Value of " << n << "C" << r << " is: " << ans << "\n";

    return 0;
}