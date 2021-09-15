// C++ code to demonstrate NaN exception
#include<iostream>
#include<cmath> // for sqrt()
using namespace std;
int main()
{
    float a = 2, b = -2;
  
    // Prints the number (1.41421)
    cout << sqrt(a) << endl;
  
    // Prints "nan" exception
    // sqrt(-2) is complex number
    cout << sqrt(b) << endl;
  
    return 0;
}
