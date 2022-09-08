#include <iostream>
using namespace std;

void binarytoDecimal(int n){
    int decimal=0;
    int power2=1;
    int lastdigit;
    while(n>0){
       lastdigit = n%10;
       decimal = decimal + (power2 * lastdigit);
       power2*=2;
       n/=10;
    }
    cout<<decimal;

}

int main()
{
    int n;
    cout<<"Enter the binary number \n";
    cin>>n;
    binarytoDecimal(n);
    return 0;
}