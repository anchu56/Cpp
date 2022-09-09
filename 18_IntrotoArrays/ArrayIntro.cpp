#include <iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter size of array \n";
    cin>>n;
    int b[n];    // Initalizing array of size n
    cout<<"Enter the elements of the array \n";
    for(int i=0;i<n;i++){
        cin>>b[i];                                 // inputing values into the array
    }
    cout<<"Outputing the array elements \n";
    for(int i=0;i<n;i++){
        cout<<b[i];                                 // outputing values into the array
        cout<<endl;
    }
    cout<<"The second element in the array is  \n";
    cout<<b[1];                                     // Accessing values at specific index
    return 0;
}