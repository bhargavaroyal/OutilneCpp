// C+++ code for above explanation
#include <cmath>
#include <iostream>
using namespace std;
  
// Driver program
int main()
{
    // Initializing values for int type
    long int a1 = 25, b1 = 30;
  
    // Initializing values for double type
    double a2 = .25, b2 = .30;
    long int ans_1 = (a1 * b1);
    double ans_2 = (a2 * b2);
  
    // Rounded result for both
    cout << "From first multiplication :" << round(ans_1) << "\n";
    cout << "From second multiplication :" << round(ans_2) << "\n";
    return 0;
}
