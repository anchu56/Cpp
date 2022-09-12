#include <iostream>
using namespace std;
int main()
{
    int x,y;
    cout<<"Enter order of Matrix A \n";
    cin>>x>>y;
    int a[x][y],b[x][y];
    for(int i=0;i<x;i++){
        for(int j=0;j<y;j++){
            cin>>a[i][j];
        }
    }
    for(int i=0;i<x;i++){
        for(int j=0;j<y;j++){
            cout<<a[i][j]<<" ";
            
        }
        cout<<endl;
    }

// Finding transpose
     for(int i=0;i<x;i++){
        for(int j=0;j<y;j++){
            b[j][i]=a[i][j];
            
        }}
    cout<<" The transpose of the given matrix is \n";
    for(int i=0;i<y;i++){
        for(int j=0;j<x;j++){
            cout<<b[i][j]<<" ";
            
        }
        cout<<endl;
    }

   

    return 0;
}