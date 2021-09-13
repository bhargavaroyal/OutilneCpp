Any number which has only two divisors, one divisor is the number itself and other divisor is 1, is called as Prime number.


Algorithmn

Take input of the number.
put a loop from 2 to that number.
If the number gets divided by any number in the loop, that means the number is not Prime.
Othewise, Prime.

#include<iostream>
using namespace std;

void print(int n){
    // complete this function
    
        if (n <= 1){
            cout<<"Not Prime";
                return;
        }
        for (int i = 2; i < n; i++){
            if (n % i == 0){
                cout<<"Not Prime";
                return;
            }
       }
        cout<<"Prime";
}
