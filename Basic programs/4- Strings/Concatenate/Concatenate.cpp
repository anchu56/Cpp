#include <iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
{
    char x1[20],x2[20];             // If we initialized it as string this wont work as the length cant be increased in method1 but we can assign it as string in method 2 and method 3
    cout<<"Enter string1 \n";
    cin>>x1;
    cout<<"Enter string2 \n";
    cin>>x2;

    // Method 1 - without using inbuild functions 
    int i=0,j=0;
    for(i=0 ; x1[i]!= '\0' ; i++ ){

    }
    for(j=0;x2[j]!='\0';j++){
        x1[i]=x2[j];
        i++;
    }
    x1[i]='\0';
    cout<<x1<<endl;


    // // Method 2
    // cout<<"Concatenated string - "<<x1+x2<<endl;

    // // Method 3;
    //  cout<<"Concatenated string - "<<x1.append(x2)<<endl;

    return 0;
}