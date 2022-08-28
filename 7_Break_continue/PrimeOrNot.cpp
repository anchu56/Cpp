#include <iostream>
using namespace std;
int main()
{
    
    int n,flag=1;
    cout<<"Enter a number to check whether its prime \n";
    cin>>n;
    for(int i=2;i<=n/2;i++){
        if(n%i==0){
            flag=0;
            break;
        }
        
    }
    if(flag==0){
        cout<<"The given number is not prime";
    }
    else{
        cout<<"The given number is a prime number";
    }
    return 0;
}