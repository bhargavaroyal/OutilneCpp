// C++ program to illustrate
// multimap::max_size()
#include <bits/stdc++.h>
using namespace std;
 
int main()
{
 
    // initialize container
    multimap<int, int> mp1, mp2;
 
    cout << "The max size of mp1 is " << mp1.max_size();
    cout << "\nThe max size of mp2 is " << mp2.max_size();
    return 0;
}
