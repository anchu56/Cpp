#include <iostream>
using namespace std;
int main()
{
    int n,m;
    cout<<"Enter number of rows \n";
    cin>>n;
    cout<<"Enter number of columns \n";
    cin>>m;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            cout<<"* ";
        }
        cout<<endl;
    }
    return 0;
}