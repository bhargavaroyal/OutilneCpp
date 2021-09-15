// c++ program to demonstrate
// example of quick_exit() function.
  
#include <bits/stdc++.h>
using namespace std;
  
void function1()
{
    cout << "Exit Function 1" << endl;
}
void function2()
{
    cout << "Exit Function 2" << endl;
}
  
int main()
{
    // registering function 
    at_quick_exit(function1);
    at_quick_exit(function2);
  
    quick_exit(0);
    return 0;
}
