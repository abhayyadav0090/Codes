#include <bits/stdc++.h>
using namespace std;

int main(){
    cout << "Print anything 500 times -> time taking -> so use for loop" << endl;
    
    // for loop
    for(int i=1; i<=2; i++){
        cout<< "Abhay Yadav" << endl;
    }

    int i=1;
    while(i<=2){
        cout << "Abhay " << i << endl;
        i++;
    }

    do
    {
        cout << "Abhay " << i << endl;
    } while (i<=2);
    
    
    return 0;
}