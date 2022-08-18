#include <iostream>
using namespace std;
int main()
{
    int a,b,temp;
    cout<<"Enter two numbers a and b \n";
    cin>>a>>b;
    cout<<"The numbers before swapping are a = "<<a<<" and b = "<<b<<endl;
    temp=a;
    a=b;
    b=temp;
    cout<<"The numbers after swapping are a = "<<a<<" and b = "<<b<<endl;
    return 0;
}