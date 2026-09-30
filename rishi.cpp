#include<iostream>
#include<vector>
using namespace std;

class Stack{    //class ke andar tum variables, constructor, functions sb bana skte ho...
    public :
    int arr[100];
    int index;

    Stack() {
        index = -1;
    }

    void push(int val) {
        if(index == 99) {
            cout << "Stack overflow" << endl;
        }
        else {
            index++;
            arr[index] = val;
            cout << val << " pushed into stack" << endl;
        }
    }

    //delete kar do ya pop
    void pop() {
        if(index==-1) {
            cout << "Stack is underflown" << endl;
        }
        else {
            cout << arr[index] << " popped from the stack" << endl;
            index--;
        }
    }

    int top() {                      //pehele check krlo ki stack empty toh nahi hai agar empty hua toh top wale ko call krne ka kya fyda jb stack mai koi element hi nahi hai  
        return arr[index];
    }

    // bool empty() {
    //     return index == -1;
    // }

    bool empty() {
    if (index == -1) {
        return true;
    } else {
        return false;
    }
}

    int size() {
        return index+1;
    }
};

int main() {
    //stack ko banyenge kaise?   //Array implementation

    Stack s;
    s.push(20);
    s.push(7);
    cout << s.arr[0] << endl;

    return 0;
}