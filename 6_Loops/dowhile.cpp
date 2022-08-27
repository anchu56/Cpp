#include <iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter n \n";
    cin>>n;
    do{
        cout<<" given number is "<<n<<endl;
        cin>>n;
    }
    while (n>0);
    
    return 0;
}