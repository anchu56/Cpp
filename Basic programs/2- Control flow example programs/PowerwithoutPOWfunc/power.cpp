#include <iostream>
using namespace std;
int main()
{
    int base,exponent,result=1;
    cout<<"Enter base number \n";
    cin>>base;
    cout<<"Enter exponent \n";
    cin>>exponent;
    for(int i=1;i<=exponent;i++){
        result=result*base; //result*=base;
    }
    cout<<base<<"^"<<exponent<<" = "<<result;
    return 0;
}