#include <iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the number \n";
    cin>>n;
    cout<<"Factors of "<<n<<" are \n";
    for(int i=1;i<=n/2;i++){
        if(n%i==0){
            cout<<i<<" ";
        }
    }
    return 0;
}