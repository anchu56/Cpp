#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int binarySearch(int a[],int low,int high,int key){
    while(low<=high){              // note to iterate until equal ..not strictly high>low
        int mid = (low+high)/2;     // position of mid is inside while loop and not outside 
        if(a[mid]==key){
        return mid;
    }
    else if(a[mid]>key){
        high=mid-1;
    }
    else if(a[mid]<key){
        low=mid+1;
    }
    
    }
    return -1;  
}


int main()
{
    int n,key;
    cout<<"Enter the size of the array \n";
    cin>>n;
    int a[n];
    cout<<"Enter the elements \n";
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    cout<<"Enter the element to be searched \n";
    cin>>key;

    int result = binarySearch(a,0,n-1,key);

    if(result == -1){
        cout<<key<<" doesn't exist in the array \n";
    }
    else{
        cout<<key<<" exist at index "<<result<<endl;
    }
    return 0;
}