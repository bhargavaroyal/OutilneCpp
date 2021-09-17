// C++ program to demonstrate the sinh()
// function When argument is too large
#include <bits/stdc++.h>
using namespace std;
  
int main()
{
    double x = 3000.0; 
  
    double result = sinh(x);
    cout << "sinh(x) = " << result << endl;
  
    return 0;
}
