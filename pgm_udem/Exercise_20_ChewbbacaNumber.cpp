
#include<iostream>
using namespace std;

void print(long long int num){
    // complete this function
    long long int n = num;
    long long int ans = 0;
    long long int mult = 1;
    while(n != 0){

      long long int rem = n % 10;

      if(rem >= 5){

        if(rem == 9 && (n/10) == 0){
         //do nothing
        }else{
          rem = 9 - rem;
        }
      }
      ans += rem * mult;
      mult *= 10;
      n /= 10;
    }
    cout << ans;
}