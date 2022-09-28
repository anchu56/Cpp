#include <iostream>
using namespace std;
int main()
{
    int n,m;
    cout<<"Enter the no of rows and columns in the matrix \n";
    cin>>n>>m;
    int a[n][m];
    if(n!=m){
        cout<<"It should a square matrix \n";
        return 0;
    }
    cout<<"Enter the elements of the matrix \n";
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>a[i][j];
        }
    }
    // Sum of diagonals
    int sum=0;
    for(int i=0;i<n;i++){
        sum+=a[i][i];
    }
    cout<<"Sum of diagonal elements = "<<sum;
    return 0;
}