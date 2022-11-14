#include<iostream>
#include<stack>
#include<string>
using namespace std;

int precedence(char c){
    if(c=='^'){
        return 3;
    }
    else if(c=='*' || c=='/'){
        return 2;
    }
    else if(c=='+' || c=='-'){
        return 1;
    }
    else 
    return -1;
}

void infixtopost(string x){
    stack <char> s;
    string ans="";
    for(int i=0;i<x.length();i++){

        if(x[i]>='a' && x[i]<='z' || x[i]>='A' && x[i]<='Z'){
            ans+=x[i];
        }

        else if(x[i]=='('){
            s.push(x[i]);
        }
        
        else if(x[i]==')'){
            while(!s.empty() && s.top()!='(' ){
                ans+=s.top();
                s.pop();
            }
            if(!s.empty()){
                s.pop();
            }
            
        }
        
        else{
            while(!s.empty() && precedence(x[i])<precedence(s.top() )){
                ans+=s.top();
                s.pop();
            }
            s.push(x[i]);
        }
    }
    while(!s.empty()){    // Dont forget to add the remaining elements in the stack.
        ans+=s.top();
        s.pop();
    }
    cout<<ans;

}


int main(){
    string x = "(a-b/c)*(a/k-l)";
    infixtopost(x);
    return 0;
}