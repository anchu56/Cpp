#include <iostream>
using namespace std;

bool checkprime(int n){
    for(int i=2;i<n;i++){
        if(n%i==0){
            return false;
        }
        
    }
    return true;
}


void printprime(int n){
    for(int i=2;i<=n;i++){
        if(checkprime(i)){
            cout<<i<<" ";
        }

    }
}


int main()
{
    int n;
    cout<<"Enter n \n";
    cin>>n;
    printprime(n);
    return 0;
}