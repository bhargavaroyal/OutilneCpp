// c++ program to demonstrate
// example of isnormal() function.
  
#include <bits/stdc++.h>
  
using namespace std;
  
int main()
{
  
    float f = 6.0F;
  
    // check for +ve infinite value
    cout << "isinf(6.0/0.0) is = " << isinf(f/0.0) << endl;
  
    // check for -ve infinite value
    f = -1.2F;
    cout << "isinf(-1.2/0.0) is = " << isinf(f/0.0) << endl;
  
    return 0;
}
