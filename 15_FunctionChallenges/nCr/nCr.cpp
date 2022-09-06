#include <iostream>
using namespace std;

int fact(int n){
    int fact=1;
    for(int i=n;i>=1;i--){
        fact*=i;
    }
    return fact;
}

int main()
{
    int n,r,nCr;
    cout<<"Enter n \n";
    cin>>n;
    cout<<"Enter r \n";
    cin>>r;
    nCr = fact(n) / ( fact(n-r)*fact(r));
    cout<<n<<"C"<<r<<" = "<<nCr;

    return 0;
}