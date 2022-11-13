#include <iostream>
using namespace std;

#define n 100

class stack{
    int* arr;
    int top;

    public:
    stack(){
        arr= new int[n];
        top=-1;
}

    void push(int val){
        if(top==n-1){
            cout<<"Stack is full \n";
            return;
        }
        top++;
        arr[top]=val;
    }

    void pop(){
        if(top==-1){
            cout<<"Stack is empty \n";
            return;
        }
        top--;
    }

    void display(){

        cout<<arr[top]<<endl;
    }

    bool isEmpty(){
        return top==-1;
    }

};


int main(){
    stack stk;
    stk.push(12);
    stk.push(25);
    stk.push(30);
    stk.display();
    stk.pop();
    stk.display();
    stk.pop();
    stk.display();
    stk.pop();
    stk.pop();
    cout<<stk.isEmpty()<<endl;
    stk.push(100);
    stk.display();
    cout<<stk.isEmpty();
}