// C++ program to demonstrate
// the atanh() function 
// string passed
#include <bits/stdc++.h>
using namespace std;
  
int main()
{
    string x = "gfg";
  
    // Function call to calculate atanh(x) value
    double result = atanh(x);
  
    cout << "atanh(50.0) = " << result << " radians" << endl;
    cout << "atanh(50.0) = " << result * 180 / 3.141592
         << " degrees" << endl;
    return 0;
}
