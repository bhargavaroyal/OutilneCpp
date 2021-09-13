#include<iostream>
#include<cmath>
using namespace std;

void print(int n){
    // complete this function
     int noOfDigits = 0;
    int m = n;
    while (m)
    {
        noOfDigits++;
        m /= 10;
    }

    m = n;
    int sum = 0;
    while (m)
    {
        int r = m % 10;
        sum += pow(r, noOfDigits);
        m /= 10;
    }

     if(n == sum){
         cout<<"true";
     }else{
         cout<<"false";
     }
}