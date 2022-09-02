#include <iostream>
using namespace std;
int main()
{
    int n,reverse=0,remainder,originalnum;
    cout<<"Enter the number \n";
    cin>>n;
    originalnum = n;             // Here we have to store n in original number as we divide n=n/10 each time last the value of n is 0 so we cant compare. Inorder to avoid this problem we store the value of n in another variable;
    while(n!=0){
        remainder = n%10;
        reverse = reverse*10+remainder;
        n=n/10;
    }
    if(reverse==originalnum){
        cout<<"It is a palindrome number";}
    else{
        cout<<"It is not a palindrome number";
    }
    
    
    return 0;
}