#include <iostream>
using namespace std;
int main()
{
    int n;
    float avg,sum=0.0;
    cout<<"Enter size of array \n";
    cin>>n;
    float a[n];
    cout<<"Enter the elements \n";
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<n;i++){
        sum+=a[i];
    }
    avg = sum/n;
    cout<<"Average = "<<avg;

    return 0;
}