/*The Fibonacci numbers are the numbers in the following integer sequence. 0, 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89, 144, ……..

In this sequence a fibonacci number is calculated as sum of the previous two fibonacci numbers.Here 0th fibonacci is 0 and 1stfibonacci is 1.

In the given pattern each number is separated from other by a tab. For given input n, You need to print n(n+1)/2 fibonacci numbers i.e. Kth row contains , next k fibonacci numbers.
*/

#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter value of n: ";
    cin>>n;
    // complete this function
        int nst = 1;
        int rows = 1;
        int firstFibo = 0;
        int secondFibo = 1;
        while(rows <= n){


            int cst = 1;
            while(cst <= nst){

                cout<<firstFibo<<"\t"; // Print the fibo number
                int thirdFibo = firstFibo + secondFibo; // Generate Third Fibo number
                firstFibo = secondFibo;  //Update first Fibo number
                secondFibo = thirdFibo; // Update third Fibo number
                cst++;
            }

            rows++;
            nst++;
            cout<<endl;
        }
        return 0;
}