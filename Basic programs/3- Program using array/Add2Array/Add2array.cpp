#include <iostream>
using namespace std;
int main()
{
    int x,y;
    cout<<"Enter order of Matrix  \n";
    cin>>x>>y;
    int a[x][y],b[x][y],c[x][y];
    cout<<"Enter elements of matrix A \n";
    for(int i=0;i<x;i++){
        for(int j=0;j<y;j++){
           cin>>a[i][j]; 
        }
    }

     cout<<"Enter elements of matrix B \n";
    for(int i=0;i<x;i++){
        for(int j=0;j<y;j++){
           cin>>b[i][j]; 
        }
    }

    for(int i=0;i<x;i++){
        for(int j=0;j<y;j++){
           c[i][j]=a[i][j]+b[i][j];
        }
    }

    cout<<"Resultant matrix =  \n";
    for(int i=0;i<x;i++){
        for(int j=0;j<y;j++){
           cout<<c[i][j]<<" "; 
        }
        cout<<endl;
    }

    return 0;
}