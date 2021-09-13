#include<iostream>
using namespace std;

void print(int n){
    // complete this function
     for(int a=0;a*a<=(n/2);a++){//a<=n 
            for(int b=a;b<=n;b++)
               {  if(a*a+b*b==n) {
                     cout<<"("<<a<<","<<b<<")"<<" ";
                  }
             }
         }
}