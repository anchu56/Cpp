#include<iostream>
#include<math.h>
#include<stack>
using namespace std;

int PostEvaluation(string s ){
    stack<int>stk;
    for(int i=0;i<s.length();i++){
        if(s[i]>='0' && s[i]<='9'){
            stk.push(s[i]-'0');
        }
        else{
            int op2=stk.top();        // first is op2
            stk.pop();
            int op1=stk.top();
            stk.pop();
            switch (s[i])
            {
            case '+':
                stk.push(op1+op2);
                break;
            case '-':
                stk.push(op1-op2);
                break;
            case '*':
                stk.push(op1*op2);
                break;
            case '/':
                stk.push(op1/op2);
                break;
            case '^':
                stk.push(pow(op1,op2));
                break;
            
            default:
                break;
            }
        }

    }

return stk.top();
}


int main(){
    string s = "46+2/5*7+";
    cout<<PostEvaluation(s);
    return 0;
}