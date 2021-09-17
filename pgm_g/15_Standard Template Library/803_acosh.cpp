// C++ program to demonstrate
// the acos() function
#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    double x = 1.0;
 
    // Function call to calculate acos(x) value
    double result = acos(x);
 
    cout << "acos(1.0) = " << result <<
                               " radians" << endl;
    cout << "acos(1.0) = " << result * 180 / 3.141592
         << " degrees" << endl;
 
    return 0;
}
