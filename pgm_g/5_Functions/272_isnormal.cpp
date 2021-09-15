// c++ program to demonstrate
// example of isnormal() function.
  
#include <bits/stdc++.h>
  
using namespace std;
  
int main()
{
  
    float f = 7.0F;
  
    // check for non-zero value
    cout << "isnormal(7.0) is = " << isnormal(f) << endl;
  
    // check for zero
    f = 0.0F;
    cout << "isnormal(0.0) is = " << isnormal(f) << endl;
  
    // check for infinite value
    f = 9.2F;
    cout << "isnormal(9.2/0.0) is = " << isnormal(f / 0.0) << endl;
  
    return 0;
}
