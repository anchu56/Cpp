#include <iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter a number \n";
    cin>>n;
    if(n>=0){
        if(n==0){
             cout<<"The given number is zero";
        }
        else
        cout<<"The given number "<<n<<" is a positive number";
    }
    else{
        cout<<"The given number "<<n<<" is a negative number";
    }
    return 0;
}