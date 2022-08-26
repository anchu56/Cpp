#include <iostream>
using namespace std;
int main()
{
    int savings;
    cout<<"Enter savings amount \n";
    cin>>savings;
    if (savings>5000){
        if(savings>10000){
            cout<<"Go for a trip"<<endl;
        }
        else{
            cout<<"Go for shopping"<<endl;
        }
    }
    else if (savings>2000)
    {
        cout<<"Go out with parents"<<endl;
    }
    else{
        cout<<"Go out with friends"<<endl;
    }
    return 0;
}