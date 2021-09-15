// C++ code to check for NaN exception
// using "==" operator
#include<iostream>
#include<cmath> // for sqrt()
using namespace std;
int main()
{
    float a = sqrt(2);
    float b = sqrt(-2);
  
    // Returns true, a is real number
    // prints "Its a real number"
    a==a? cout << "Its a real number" << endl:
          cout << "Its NaN" << endl;
  
    // Returns false, b is complex number
    // prints "Its nan"
    b==b? cout << "Its a real number" << endl:
          cout << "Its NaN" << endl;
  
    return 0;
  
}
