#include <iostream>
using namespace std;
int main()
{
    int n,reverse=0,remainder;
    cout<<"Enter the number \n";
    cin>>n;
    while(n!=0){
        remainder = n%10;
        reverse = reverse*10+remainder;
        n=n/10;
    }
    cout<<"Reversed number = "<<reverse;
    return 0;
}