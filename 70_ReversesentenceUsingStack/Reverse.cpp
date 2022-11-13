#include<iostream>
#include <stack>
using namespace std;


void reverseSentence(string x){

    stack<string> s;
    for(int i=0;i<x.length();i++){
        string ans="";
        while(x[i]!=' ' && i<x.length()){
            ans+=x[i];
            i++;
        }
        s.push(ans);
    }

    while(!s.empty()){
        cout<<s.top()<<" ";
        s.pop();
    }
}



int main(){
    string s = "What is your name? \n";
    reverseSentence(s);
    return 0;
}