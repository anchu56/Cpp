#include <iostream>
#include<math.h>
using namespace std;
int main()
{
    int n,remainder,digits=0,result=0,originalnumber;
    cout<<"Enter a number \n";
    cin>>n;
    originalnumber=n;
    while(n!=0){
        n=n/10;
        digits=digits+1;
    }
    n=originalnumber;
    while(n!=0){
        remainder=n%10;
        result += pow(remainder,digits);
        n=n/10;
        
    }
    if(result==originalnumber){
    cout<<originalnumber<<" is a armstrong number ";
    }
    else{
    cout<<originalnumber<<" is not a armstrong number";
    }
    return 0;
}