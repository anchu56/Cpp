#include <iostream>
using namespace std;
int main()
{
    int a,b,opt,result=0;
    cout<<"Enter two operands \n";
    cin>>a>>b;
    cout<<"Choose the operator \n 1 - Addition \n 2 - Subtraction \n 3 - Multiplication \n 4 - Division \n";
    cin>>opt;
    switch(opt)
    {
        case 1:                     // Dont give case '1' : because opt is declared as int. If we our opt was char like '+' '-' then we have to give case '+': .
        result = a+b;
        cout<<" Result = "<<result;
        break;

        case 2:
        result = a-b;
        cout<<" Result = "<<result;
        break;

        case 3:
        result = a*b;
        cout<<" Result = "<<result;
        break;

        case 4:
        result = a/b;
        cout<<" Result = "<<result;
        break;

        default:
        cout<<"Invalid input \n";
        break;
         
    }
    return 0;
}