#include <iostream>
using namespace std;
int main()
{
    int a,b,c;
    cout<<"Enter 3 numbers \n";
    cin>>a>>b>>c;
    if(a>b){
        if(a>c){
            cout<<"The largest of 3 numbers is "<<a;
        }
        else{
            cout<<"The largest of 3 numbers is "<<c;
        }
    }
    else{
        if(b>c){
            cout<<"The largest of 3 numbers is "<<b;
        }
        else{
            cout<<"The largest of 3 numbers is "<<c;
        }
    }
    return 0;
}