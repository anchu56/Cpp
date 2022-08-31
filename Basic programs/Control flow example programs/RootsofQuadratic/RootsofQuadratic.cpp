#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    double a,b,c,discriminant,root1,root2,realpart,imgpart;
    cout<<"Enter the coefficient of x^2 \n";
    cin>>a;
    cout<<"Enter the coefficient of x^1 \n";
    cin>>b;
    cout<<"Enter the cofficient of x^0 \n";
    cin>>c;
    cout<<"Given quadratic equation is "<<a<<"x^2 + "<<b<<"x^1 + "<<c<<endl;
    discriminant= pow(b,2) - 4*a*c;
    cout<<"discriminant = "<<discriminant<<endl;
    
       
        if (discriminant > 0)
        {
           root1= -b/2*a + sqrt(discriminant)/(2*a);   // not 2a its 2*a // also give it as ( 2*a) if we give 2*a without bracket the answer will be different
           root2= -b/2*a - sqrt(discriminant)/(2*a);
           cout<<" Root 1 = "<<root1<<"\n Root 2 = "<<root2<<endl;
        }
        else if(discriminant == 0)
        {
            root1=root2= -b/(2*a);
            cout<<" Root 1 = "<<root1<<"\n Root 2 = "<<root2<<endl;
        }
        else if(discriminant<0)
        {
            realpart = -b/(2*a);
            imgpart = sqrt(-discriminant)/(2*a);
            cout<<" root1 = "<<realpart<<" + "<<imgpart<<" i "<<endl;
            cout<<" root2 = "<<realpart<<" - "<<imgpart<<" i "<<endl;

            // for reducing number of decimal points use setprecision(no_upto_which_it is_precised) this setprecision() function is present in #include<bits/stdc++.h>
            // cout<<" root1 = "<<setprecision(2)<<realpart<<" + "<<imgpart<<" i "<<endl;
            // cout<<" root2 = "<<setprecision(2)<<realpart<<" - "<<imgpart<<" i "<<endl;
        }
    

    return 0;
}