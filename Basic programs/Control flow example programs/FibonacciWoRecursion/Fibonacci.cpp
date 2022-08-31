#include <iostream>
using namespace std;
int main()
{
    int n;
    int t1=0,t2=1,t3;
    cout<<"Enter the number of terms \n";
    cin>>n;
    for(int i=1;i<=n;i++){
        cout<<t1<<" ";
        t3=t1+t2;
        t1=t2;
        t2=t3;
        
    }
    return 0;
}