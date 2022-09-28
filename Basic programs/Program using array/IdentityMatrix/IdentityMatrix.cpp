#include <iostream>
using namespace std;
int main()
{
    int n,m;
    int flag=0;
    cout<<"Enter the no of rows and columns in the matrix \n";
    cin>>n>>m;
    int a[n][m];
    cout<<"Enter the elements of matrix A \n";
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>a[i][j];
        }
    }
    for(int i=0;i<n;i++){
        if(a[i][i]!=1){
                flag=1;
            }
        for(int j=0;j<m;j++){
            if(i!=j && a[i][j]!=0){
                flag=1;
            }
        }
    }

    if(flag==1){
        cout<<"It is not an Identity matrix \n";
    }
    else{
        cout<<"It is a Identity matrix \n";
    }
    return 0;
}