#include <iostream>
using namespace std;
int main()
{
    int lower,upper,j,flag=1;
    cout<<"Enter the lower limit \n";
    cin>>lower;
    cout<<"Enter the upper limit \n";
    cin>>upper;
    for(int i=lower;i<=upper;i++){
        for(j=2;j<i;j++){
            if (i%j==0)
            {
                flag=0;
                break;
            }
        }
         if(flag==1){
            cout<<i<<" is a prime number";
         }   
        
    }
    return 0;
}

