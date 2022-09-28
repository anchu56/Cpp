#include <iostream>
using namespace std;
int main()
{
    int asize,bsize;
    cout<<"Enter size of array 1 \n";
    cin>>asize;
    int a[asize];
    for(int i=0;i<asize;i++){
        cin>>a[i];
    }

    cout<<"Enter size of array 2 \n";
    cin>>bsize;
    int b[bsize];
    for(int i=0;i<bsize;i++){
        cin>>b[i];
    }

    int msize = asize+bsize;
    int m[msize];

    for(int i=0;i<asize;i++){
     m[i]=a[i];
    }

    int s;
    for(int j=asize,s=0;j<msize ,s<bsize ;j++, s++){
        m[j]=b[s];
    }
    cout<<"Merged array = \n";
    for(int i=0;i<msize;i++){
        cout<<m[i]<<" ";
    }
    return 0;
}