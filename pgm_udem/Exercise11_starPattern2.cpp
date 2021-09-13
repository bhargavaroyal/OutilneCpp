#include<iostream>
using namespace std;

int main(){
    // complete this function
    //loop for each row

    int n;
    cin>>n;
    cout <<"Enter the value of n: ";
    for (int i = 1; i <= n; i++)
    {
       // work for numbers
        for (int j = 1; j <= i; j++)
            cout << j;

       // work for stars
        for (int j = 1; j <= n - i; j++)
            cout << "*";
        cout << endl;
    }
}