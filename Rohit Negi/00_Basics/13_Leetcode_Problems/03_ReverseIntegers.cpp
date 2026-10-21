/*
    Program: Reverse Integer (7)
    https://leetcode.com/problems/reverse-integer/
    Author: Abhay Yadav
    Date: 28/09/2026
*/

#include <bits/stdc++.h>
using namespace std;

int main(){
    int x;
    cout<<"Enter the Integer: ";
    cin>>x;
    // Automatically Handles the negative Integers
    int ans=0, rem;
    while(x){
        rem=x%10;
        if(ans > INT_MAX/10 || (ans == INT_MAX/10 && rem > 7)) return -1;
        if(ans < INT_MIN/10 || (ans == INT_MIN/10 && rem < -8)) return -1;
        ans = ans * 10 + rem;
        x/=10;
    }
    // cout<<sizeof(int)<<endl;
    cout<<"Answer is: "<<ans;
    return 0;
}

/*
Output:
Enter the Integer: -1223
Answer is: -3221

Enter the Integer: 988989898
Answer is: 898989889
*/