#include <iostream>
using namespace std;

bool checkprime(int i){
    int j;
    for(int j=2;j<=i/2;j++){
        if(i%j==0){
            return false;
        }
        else if(j==1){
            return true;
        }
    }
         
    }




void printprime(int x,int y){
   for(int i=x;i<=y;i++){
    if(checkprime(i)){
        cout<<i<<endl;
    }
   }
}




int main()
{
    int x,y;
    cout<<" Enter lower bound \n";
    cin>>x;
    cout<<"Enter upper bound \n";
    cin>>y;
    printprime(x,y);
    return 0;
}