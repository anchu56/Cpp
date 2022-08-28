
#include <iostream>
using namespace std;
int main()
{
    int lower,upper,j;
    cout<<"Enter the lower limit \n";
    cin>>lower;
    cout<<"Enter the upper limit \n";
    cin>>upper;
    for(int i=lower;i<=upper;i++){
        for(j=2;j<=i;j++){
            if (i%j==0)
            {
                break;
            }
        }
            if (j==i)
            {
                cout<<i<<" is a prime number \n";
            }
            
            
        
    }
    return 0;
}



// till i/2 code


// #include <iostream>
// using namespace std;
// int main()
// {
//     int lower,upper,j;
//     cout<<"Enter the lower limit \n";
//     cin>>lower;
//     cout<<"Enter the upper limit \n";
//     cin>>upper;
//     for(int i=lower;i<=upper;i++){
//         for(j=2;j<=i/2;j++){
//             if (i%j==0)
//             {
//                 break;
//             }
//         }
//             if (j==i/2+1 )
//             {
//                 cout<<i<<" is a prime number \n";
//             }
           
        
//     }
//     return 0;
// }






// Solving with flag values

// #include <iostream>
// using namespace std;
// int main()
// {
//     int lower,upper,j;
//     cout<<"Enter the lower limit \n";
//     cin>>lower;
//     cout<<"Enter the upper limit \n";
//     cin>>upper;
//     int flag;
//     for(int i=lower;i<=upper;i++){
//            flag = 1;
//         for(j=2;j<i;j++){
//             if (i%j==0)
//             {
//                 flag=0;
//                 break;
//             }
//         }
//          if(flag==1){
//             cout<<i<<" is a prime number \n";
//          }   
        
//     }
//     return 0;
// }




