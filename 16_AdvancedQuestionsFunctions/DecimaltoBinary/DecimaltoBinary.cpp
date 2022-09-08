#include <bits/stdc++.h>
using namespace std;

void decimaltoBinary(int n){
     string binary;
     int remainder;
     while(n>0){
        remainder = n%2;
        char a = (char)(remainder + '0');   // ASCII value of 0 is 48 so we add 48+(num) to get num. 48+0=48 => 0
        binary.push_back(a);
        n=n/2;
     }
     reverse(binary.begin(), binary.end());
     cout<<binary;
}


int main()
{
    int n;
    cout<<"Enter n \n";
    cin>>n;
    decimaltoBinary(n);
    return 0;
}