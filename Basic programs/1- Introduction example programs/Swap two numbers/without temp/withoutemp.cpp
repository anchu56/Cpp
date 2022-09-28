#include <iostream>
using namespace std;
int main()
{
    int a,b;
    cout<<"Enter two numbers a and b \n";
    cin>>a>>b;
    cout<<"The numbers before swapping are a = "<<a<<" and b = "<<b<<endl;
    a=a-b;
    b=a+b;
    a=b-a;
    cout<<"The numbers after swapping are a = "<<a<<" and b = "<<b<<endl;
    return 0;
}