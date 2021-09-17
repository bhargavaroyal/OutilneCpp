// CPP program to demonstrate the
// tanh() function
#include <bits/stdc++.h>
using namespace std;
  
int main()
{
    int x = -4;
    double result;
  
    result = tanh(x);
    cout << "tanh(-4) = " << result << endl;
  
    // x in Degrees
    double xDegrees = 90;
    x = xDegrees * 3.14159 / 180;
  
    result = tanh(x);
    cout << "tanh(90 degrees) = " << result << endl;
  
    return 0;
}
