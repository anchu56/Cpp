#include <iostream>
using namespace std;
int main()
{
    int n,flag=0;
    cout<<"Enter a number \n";
    cin>>n;
    
    for(int i=2;i<=n/2;i++){
        if(n%i==0){
            flag=1;
            break;
        }
    }       
    if(flag==1){
        cout<<"It is not a prime number";
    }
    else if(n==0){
        cout<<"It is neither a prime nor a composite number";
        }
    else{
        cout<<"It is a prime number ";
    }
    return 0;
}