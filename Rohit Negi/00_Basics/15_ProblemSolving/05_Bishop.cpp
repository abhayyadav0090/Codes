/*
    Program: Bishop
    Author: Abhay Yadav
    Date: 21/10/2026
*/

#include <bits/stdc++.h>
using namespace std;

// int min(int a, int b){
//     if(a<=b) return a;
//     return b;
// }
 
int solve(int A, int B) {
    int total = 0;
    total+=min(8-A, 8-B);
    total+=min(8-A, B-1);
    total+=min(A-1, B-1);
    total+=min(A-1, 8-B);
    return total;
}

int main(){
    int A, B;
    cout<<"Enter the position of bishop in 8x8 chess board -> A(rows) B(cols): ";
    cin>>A>>B;
    if(A>8 || B>8 || A<1 || B<1) {cout<<"Enter a valid postion!!"; return 0;}
    cout<<"Total possible moves: "<<solve(A, B);
    return 0;
}