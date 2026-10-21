/*
    Program: Square Root of the given number
    Author: Abhay Yadav
    Date: 02/10/2026
*/

#include <bits/stdc++.h>
using namespace std;

int main(){
    int num;
    cout<<"enter the number to find the square root: ";
    cin>>num;
    int nonPerfect=1;
	if(num<=0) return 0;
	long long left = 1, right = num;
	while(left <= right) {
		long long mid = left + (right - left) / 2;
		long long sq = mid * mid;
		if(sq==num) {cout<<mid; return 0;}
		else if(sq<num) {left=mid+1; nonPerfect=mid;}
		else right=mid-1;
	}
    cout<<nonPerfect;
    return 0;
}