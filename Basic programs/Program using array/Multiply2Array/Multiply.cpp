#include <iostream>
using namespace std;
int main()
{
    int x,y,m,n;
    cout<<"Enter order of Matrix A \n";
    cin>>x>>y;
    cout<<"Enter order of Matrix B \n";
    cin>>m>>n;

    if(y!=m){
        cout<<"Cant multilpy \n";
        return 0;
    }


    int a[x][y],b[m][n],c[x][n];

    cout<<"Enter elements of matrix A \n";
    for(int i=0;i<x;i++){
        for(int j=0;j<y;j++){
           cin>>a[i][j]; 
        }
    }

     cout<<"Enter elements of matrix B \n";
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
           cin>>b[i][j]; 
        }
    }
    
// Initializing c array with 0 
    for(int i=0;i<x;i++){
        for(int j=0;j<n;j++){
           c[i][j]=0;
        }
    }

 
    for(int i=0;i<x;i++){
        for(int j=0;j<n;j++){
            for(int k=0;k<y;k++) {
                c[i][j]+= a[i][k]*b[k][j];  }
        }
    }

    cout<<"Resultant matrix =  \n";
    for(int i=0;i<x;i++){
        for(int j=0;j<n;j++){
           cout<<c[i][j]<<" "; 
        }
        cout<<endl;
    }

    return 0;
}