// C++ code to check for NaN exception
// using "isnan()" 
#include<iostream>
#include<cmath> // for sqrt() and isnan()
using namespace std;
int main()
{
    float a = sqrt(2);
    float b = sqrt(-2);
      
    // Returns false as a 
    // is real number
    isnan(a)? cout << "Its NaN" << endl:
              cout << "Its a real number" << endl;
      
    // Returns true as b is  NaN
    isnan(b)? cout << "Its NaN" << endl:
              cout << "Its a real number" << endl;
      
    return 0;    
}
