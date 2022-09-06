#include <iostream>
using namespace std;

void fib(int n){
    int t1=0,t2=1,t3;
    while(n>0){
        cout<<t1<<" ";
        t3=t1+t2;
        t1=t2;
        t2=t3;
        n--;
    }
}

int main()
{
    int n;
    cout<<"Enter number of terms \n";
    cin>>n;
    fib(n);
    return 0;
}