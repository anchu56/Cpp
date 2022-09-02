#include <iostream>
using namespace std;
int main()
{
    int n1,count=0;
    cout<<"Enter the number \n";
    cin>>n1;
    while(n1!=0){
    n1=n1/10;
    count++;
    }
    cout<<"Number of digits = "<<count;
    return 0;
}