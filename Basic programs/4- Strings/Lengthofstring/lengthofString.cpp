#include <iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    string x;
    cout<<"Enter the string \n";
    getline(cin,x);
    int i=0,count=0;
    while(x[i]!= '\0'){
        count++;
        i++;
    }
    cout<<"Length of the given string is "<<count;
    return 0;
}