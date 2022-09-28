#include <iostream>
using namespace std;
int main()
{
    int n,max;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=1;i<n;i++){
        if(a[i]>a[i-1]){
            max = a[i];
        }
    }
    cout<<max;
    

    return 0;
}