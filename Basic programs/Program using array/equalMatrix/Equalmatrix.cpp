#include <iostream>
using namespace std;
int main()
{
    int n1,m1,n2,m2;
    int flag=0;
    cout<<"Enter no of rows and coloumns of matrix A \n";
    cin>>n1>>m1;
    int a[n1][m1];
    cout<<"Enter no of rows and columns of matrix B \n";
    cin>>n2>>m2;
    int b[n2][m2];
    if(n1 !=n2 && m1!=m2){
        cout<<"The matrices are not equal \n";
        return 0 ;
    }
    cout<<"Enter the elements of matrix A \n";
    for(int i=0;i<n1;i++){
        for(int j=0;j<m1;j++){
            cin>>a[i][j];
        }
    }
    cout<<"Enter the elements of matrix B \n";
     for(int i=0;i<n1;i++){
        for(int j=0;j<m1;j++){
            cin>>b[i][j];
        }
    }
    /// Outputs Matrix A
    cout<<"Matrix A : \n";
    for(int i=0;i<n1;i++){
        for(int j=0;j<m1;j++){
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
    // Outputs Matrix B 
    cout<<"Matrix B : \n";
    for(int i=0;i<n1;i++){
        for(int j=0;j<m1;j++){
            cout<<b[i][j]<<" ";
        }
        cout<<endl;
    }
    // Checking each elements of 2 matrices
    for(int i=0;i<n1;i++){
        for (int j=0;j<m1;j++){
            if(a[i][j]!=b[i][j]){
                flag=1;
                break;
            }
        }
    }

    if(flag==0){
        cout<<"Given Matrices are equal \n";
    }
    else{
        cout<<"Given Matrices are not equal \n";
    }

    return 0;;

}