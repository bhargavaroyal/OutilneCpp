// C++ program to demonstrate the acos()
// function errors and exceptions
#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    double result;
    string x = "gfg";
    result = acos(x);
 
    cout << "acos(x) = " << result
        << " radians" << endl;
    cout << "acos(x) = " << result * 180 / 3.141592
        << " degrees" << endl;
 
    return 0;
}
