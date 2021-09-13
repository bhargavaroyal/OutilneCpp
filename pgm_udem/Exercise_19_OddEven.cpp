#include<iostream>
using namespace std;

void print(int n){
    // complete this function
     int oddSum = 0;
        int evenSum = 0;

        while(n != 0){

            int rem = n % 10;
            if(rem % 2 == 0){
                evenSum += rem;
            }else{
                oddSum += rem;
            }

            n = n/ 10;
        }

        if(evenSum % 4 == 0 || oddSum % 3 == 0){
            cout<<"Yes";
        }else{
            cout<<"No";
        }
}
