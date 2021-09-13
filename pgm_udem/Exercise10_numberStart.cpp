#include<iostream>
using namespace std;

int main(){
cout <<"Enter The value of n: ";
int n;
cin>>n;
    // complete this function
    // loop for each row
    for (int i = 1; i <= n; i++)
    {
       // work for numbers 
        for (int j = 1; j <= n+1-i; j++)
            cout << j << " ";

       // work for stars
        for (int j = 1; j <= 2*(i-1) - 1; j++)
            cout << "* ";
        cout << endl;
    }
}