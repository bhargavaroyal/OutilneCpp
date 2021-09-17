// C++ program to illustrate the
// max_size() function
#include <bits/stdc++.h>
using namespace std;
  
int main()
{
    // initialising the forward list
    forward_list<int> f;
  
    // print max number of values that 
    // can be held by forward_list
    cout << "Max_size of the list is " 
    << f.max_size() << endl;
  
    return 0;
}
