#include <iostream>
using namespace std;
int main()
{
    int n,key;
    int flag=0;
    int i;
    cout<<"Enter the size of the array \n";
    cin>>n;
    int a[n];
    cout<<"Enter the elements \n";
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    cout<<"Enter the element to be searched \n";
    cin>>key;
    for(i=0;i<n;i++){
        if(a[i]==key){
            flag=1;
            break;
        }
    }
    if(flag==1){
        cout<<"Element found at index "<<i;
    }
    else{
        cout<<"Element not found \n";
    }
    return 0;
}