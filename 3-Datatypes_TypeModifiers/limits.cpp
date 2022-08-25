#include <iostream>
#include<limits.h>
using namespace std;
int main()
{
    // All these functions are from limits.h library
    char a;
    cout<<"the min value of char is "<<CHAR_MIN<<endl;
    cout<<"the max value of char is "<<CHAR_MAX<<endl;
    cout<<"the min value of signed char is "<<SCHAR_MIN<<endl;
    cout<<"the max value of signed char is "<<SCHAR_MAX<<endl;
    cout<<"the max value of unsigned char is "<<UCHAR_MAX<<endl;
    cout<<"Number of bits in a char object "<<CHAR_BIT<<endl;
    cout<<"Maximum value for an object of type Unsigned long long int "<<ULLONG_MAX<<endl;

    return 0;
}