#include <iostream>
using namespace std;

void fact(int n){
    int fact=1;
    for(int i=n;i>=1;i--){
        fact*=i;
    }
    cout<<fact;
}

int main()
{
    int n;
    cout<<"Enter n \n";
    cin>>n;
    fact(n);
    return 0;
}