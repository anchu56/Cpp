#include <iostream>
using namespace std;
int main()
{
    char x;
    cout<<"Enter the character \n";
    cin>>x;
    if(x>='a' && x<='z' || x>='A' && x<='Z')
    {
        cout<<"It is a alphabet \n";
    }
    else{
        cout<<"The entered character is not an alphabet \n";
    }
    return 0;
}