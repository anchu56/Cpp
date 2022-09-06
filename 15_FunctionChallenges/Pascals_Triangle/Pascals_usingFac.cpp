//      1                   0c0
//     1 1               1c0    1c1
//    1 2 1            2c0   2c1    2c2
//   1 3 3 1
//  1 4 6 4 1




#include <iostream>
using namespace std;

int fact(int n){
    int fact=1;
    for(int i=n;i>=1;i--){
        fact*=i;
    }

    return fact;
}


int main()
{
    int n;
    cout<<"Enter n \n";
    cin>>n;
    for(int i =0;i<n;i++){
        for(int j=0;j<n-i;j++){
            cout<<" ";
        }
        for(int j=0;j<=i;j++){
            cout<< (fact(i) / ( fact(j)*fact(i-j)))<<" ";
        }
        cout<<endl;
    }
    
    return 0;
}