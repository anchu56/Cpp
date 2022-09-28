#include <iostream>
using namespace std;
int main()
{
    char x;
    cout<<"Enter a character \n";
    cin>>x;
    if (x== 'a' || x=='e' || x=='i' || x=='o' || x=='u'|| x=='A' || x=='E' || x=='I' || x=='O' || x=='U')
    {
        cout<<"The inputed character " <<x<<" is a vowel";
    }
    else{
        cout<<"The inputed character "<<x<<" is a consonant";
    }
    return 0;
}