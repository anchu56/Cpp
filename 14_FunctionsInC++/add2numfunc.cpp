#include <iostream>
using namespace std;

void print(int x){
    cout<<"Num = "<<x<<" \n";
}


int add(int num1,int num2){
    int sum;
    print(num1);
    print(num2);
    sum=num1+num2;
    return sum;
}

int main()
{
    int n1,n2,result;
    cout<<"Enter 2 numbers \n";
    cin>>n1>>n2;
    result = add(n1,n2);
    cout<<"Sum = "<<result;
    return 0;
}