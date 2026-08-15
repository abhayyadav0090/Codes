#include <bits/stdc++.h>
using namespace std;

int main(){

    // Array is a collection of similar data types. It is a data structure that can hold a fixed number of values of a single type. The values are stored in contiguous memory locations, and each value can be accessed using an index.
    // char arr[5];
    // long long arr[5];
    int arr[5]={1,2,3,4,5};
    // cin >> arr[0] >> arr[1] >> arr[2] >> arr[3] >> arr[4];
    cout << arr[0] << " " << arr[1] << " " << arr[2] << " " << arr[3] << " " << arr[4] << endl;
    arr[3] = 100;
    cout << arr[3] << endl;
    // arr[3]=7.7 -> output: 7 (decimal part is truncated)

    // 2D Array
    int array[3][5]; // 3 Rows and 5 Columuuns
    array[1][3]=78;
    cout << array[1][2] << endl; // Garbage value

    string s = "Abhay";
    int len = s.length();
    cout << s[0] << endl;
    cout << s[len-1];
    cout << s+" "+"Yadav" << endl;

    return 0;
}