#include <iostream>
#include<math.h>
using namespace std;
int main()
{
    int n,flag=0;
    cout<<"Enter n \n";
    cin>>n;
    for(int i=2;i<=sqrt(n);i++){          // Instead of checking until n/2 we have reduce the complexity by checking till sqrt of n only.
        if(n%i==0){
            flag=1;
        }
    }
    if(flag==0){
        cout<<"Its a prime number ";
    }
    else{
        cout<<"It is not a prime number";
    }
    
    return 0;
}