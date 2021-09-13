#include<iostream>
using namespace std;

void print(int n){
    // complete this function
    //loop for each row
    
    for (int i = 1; i <= n; i++)
    {

           for (int j = 1; j <= i; j++)
           {
               if(j==1 || j==i)
                cout << i<<"    ";               // for 1st and last element
               else
                cout << "0"<<"  ";             // for in between elements
           }

        cout << endl;

    }
}