#include<iostream>
using namespace std;

void print(int n,int c,int m){
    // complete this function
    int count=n/c;
       int wrap=count;    //no of chocolate =no of wrappers
       while(wrap>=m)
       {
           count=count+wrap/m;
           wrap=wrap/m+wrap%m;
       }
       cout<<count;
}