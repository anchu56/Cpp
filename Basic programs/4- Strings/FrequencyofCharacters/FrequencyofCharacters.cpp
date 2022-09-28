#include <iostream>
using namespace std;
int main()
{
    string x;
    cout<<"Enter the input string \n";
    getline(cin,x);
    int n = x.length();
    int a[26];
    for(int i =0;i<26;i++){
        a[i]=0;
    }
    int index;
    for(int i=0;i<n;i++){
       index = x[i]-'a';
       a[index]+=1;
    }
    for(int i =0;i<26;i++){
        if(a[i]!=0){
            cout<<char('a'+i)<<" - "<<a[i];
            cout<<endl;
        }
    }
    return 0;
}