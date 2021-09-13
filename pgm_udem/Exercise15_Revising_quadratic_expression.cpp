#include<iostream>
#include<cmath>
using namespace std;

void print(int a,int b,int c){
    // complete this function
   int D=b*b-4*a*c;
    if(D>0)
    {
        cout<<"Real and Distinct"<<endl;
        int x1=(-b-sqrt(D))/(2*a);
        int x2=(-b+sqrt(D))/(2*a);
        
        cout<<x1<<" "<<x2;
    }
    else if(D==0)
    {
        cout<<"Real and Equal"<<endl;
        int x1=-b/(2*a);
        cout<<x1<<" "<<x1;
    }
    else
        cout<<"Imaginary";
}