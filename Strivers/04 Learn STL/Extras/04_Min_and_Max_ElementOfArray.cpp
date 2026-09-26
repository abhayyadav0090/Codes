/*
Author: Abhay Yadav
Program: Finding Minimum and Maximum Elements in array
Date: 26/09/2026
*/

#include <bits/stdc++.h>
using namespace std;

int main(){

    // minimum and maximum elements
    // max_element(a, a+n) gives address
    // *max_element(a, a+n) gives value of element
    int a[4] = {9, 5, 2, 3};

    // addresses (iterators)
    int* maxadd = max_element(a, a + 4);
    int* minadd = min_element(a, a + 4);

    // values
    int maxval = *max_element(a, a + 4);
    int minval = *min_element(a, a + 4);

    cout << "Max value: " << maxval << " at index " << (maxadd - a) << " and at address " << (maxadd) << endl;
    cout << "Min value: " << minval << " at index " << (minadd - a) << " and at address " << (minadd) << endl;

    return 0;
}