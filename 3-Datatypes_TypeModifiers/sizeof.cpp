#include <iostream>
using namespace std;
int main()
{
    cout<<"The size of short int is "<<sizeof(short int)<<endl;  // Range = -32,768 to 32,767

    cout<<"The size of unsigned short int is "<<sizeof(unsigned short int)<<endl; // Range = 0 to 65,535

    cout<<"The size of unsigned int is "<<sizeof(unsigned int)<<endl; // Range = 0 to 4,294,967,295

    cout<<"The size of int is "<<sizeof(int)<<endl;  // Range = -2,147,483,648 to 2,147,483,647

    cout<<"The size of long int is "<<sizeof(long int)<<endl;  // -2,147,483,648 to 2,147,483,647

    cout<<"The size of unsigned long int is "<<sizeof(unsigned long int)<<endl;  // Range = 0 to 4,294,967,295

    cout<<"The size of long long int is "<<sizeof(long long int)<<endl;  // Range = -(2^63) to (2^63)-1

    cout<<"The size of unsigned long long int is "<<sizeof( unsigned long long int)<<endl;  // Range = 0 to 18,446,744,073,709,551,615

    cout<<"The size of signed char is "<<sizeof(char)<<endl;  // Range = -128 to 127

    cout<<"The size of unsigned char is "<<sizeof(char)<<endl;  // Range = 0 to 255

    cout<<"The size of float is "<<sizeof(float)<<endl;  

    cout<<"The size of double is "<<sizeof(double)<<endl;  

    cout<<"The size of long double is "<<sizeof(long double)<<endl;  

    cout<<"The size of wide character is "<<sizeof(wchar_t)<<endl;  
 
    
    return 0;
}