#include <iostream>
using namespace std;
int main()
{
    int n,sum=0,i;
    cout<<"Enter n \n";
    cin>>n;
    for(i=1;i<=n;i++){
        sum=sum+i;
    }
    cout<<"The sum of first "<<n<<" natural numbers is "<<sum;
    return 0;
}