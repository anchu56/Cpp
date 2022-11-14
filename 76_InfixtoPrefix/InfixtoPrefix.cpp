#include<iostream>
#include<string>
#include<algorithm>
#include<stack>
using namespace std;


int precedence(char c){
    if(c=='^'){
        return 3;
    }
    else if (c=='*' || c=='/'){
        return 2 ;
    }
    else if(c=='+' || c=='-'){
        return 1;
    }
    else return -1;
}

void infixtoprefix(string x){
    string res="";
    reverse(x.begin(),x.end());
    stack<int> s ;

    for(int i=0;i<x.length();i++){
        if(x[i]>='a'&& x[i]<='z' || x[i]>='A' && x[i]<='Z'){
            res+=x[i];
        }
        else if(x[i]==')'){
            s.push(x[i]);
        }
        else if(x[i]=='('){
            while(!s.empty() && s.top()!=')'){
                res+=s.top();
                s.pop();
            }
            if(!s.empty()){
                s.pop();
            }
        }
        else{
            while(!s.empty() && precedence(x[i])<precedence(s.top()) ){
                res+=s.top();
                s.pop();
            }
            s.push(x[i]);
        }
    }
    while(!s.empty()){
        res+=s.top();
        s.pop();
    }
    reverse(res.begin(),res.end());
    cout<<res;
}

int main(){
    string s = "(a-b/c)*(a/k-l)";
    infixtoprefix(s);
    return 0;
}