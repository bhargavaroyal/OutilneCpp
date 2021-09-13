#include<iostream>
using namespace std;

void print(int n){
    // complete this function
    if(n%2==0)
        cout<<n/2;
        else
            cout<<(n-1)/2-n;
}