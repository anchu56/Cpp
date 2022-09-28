#include <iostream>
using namespace std;
int main()
{
    int n1,n2,LCM;
    cout<<"Enter two number's whose LCM is to be found out \n";
    cin>>n1>>n2;
    LCM = (n1>n2) ? n1:n2;
    while(1){
        if(LCM%n1==0 && LCM%n2==0){
            break;}
        else{
            LCM++;
        }
        
    }
    cout<<"LCM of "<<n1<<" and "<<n2<<" = "<<LCM;

    return 0;
}