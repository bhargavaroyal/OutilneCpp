// C++ program to demonstrate the
// acos() function errors and exceptions
#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    double x = 3.7, result;
 
    // Function call to calculate acos(x) value
    result = acos(x);
 
    cout << "acos(3.7) = " << result
        << " radians" << endl;
    cout << "acos(3.7) = " << result * 180 / 3.141592
        << " degrees" << endl;
 
    return 0;
}
