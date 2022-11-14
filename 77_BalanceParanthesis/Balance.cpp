#include<iostream>
#include<stack>
#include<string>
using namespace std;

bool parenthesisBalance(string s){
    stack<char>stk;
    bool res=true;
    for(int i=0;i<s.length();i++){
        if(s[i]=='(' || s[i]=='[' || s[i]=='{' ){
            stk.push(s[i]);
        }
        if(s[i]==')'){
            if(!stk.empty() && stk.top()=='(' ){
                stk.pop();
            }
            else{
                return false;
            }
            
        }
        if(s[i]==']'){
            if(!stk.empty() && stk.top()=='['){
                stk.pop();
            }
            else{
                return false;
            }
        }
        if(!stk.empty() && s[i]=='}'){
            if(stk.top()=='{'){
                stk.pop();
            }
            else{
                return false;
            }
        }
    }
    if(!stk.empty()){
        return false;
    }
    else{
        return true;
    }

}



int main(){
    string s ="]";
    cout<<parenthesisBalance(s);
    return 0;
}
