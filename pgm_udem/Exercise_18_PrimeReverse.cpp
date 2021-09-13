#include<iostream>
using namespace std;

void print(int n){
    // complete this function
     int ans = 0;        
        while(n != 0){        
          int digit = n % 10;
          ans = ans *10 + digit;          
          n /= 10;        
        }                
       cout<<ans;  
}