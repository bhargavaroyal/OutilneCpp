// C++ program to illustrate the
// multimap::emplace_hint() function
#include <bits/stdc++.h>
using namespace std;
  
int main()
{
  
    // initialize container
    multimap<int, int> mp;
  
    // insert elements in random order
    mp.emplace_hint(mp.begin(), 2, 30); // faster
    mp.emplace_hint(mp.begin(), 1, 40); // faster
    mp.emplace_hint(mp.begin(), 2, 60); // slower
    mp.emplace_hint(mp.begin(), 2, 20); // slower
    mp.emplace_hint(mp.begin(), 1, 50); // faster
    mp.emplace_hint(mp.begin(), 1, 50); // faster
  
    // prints the elements
    cout << "\nThe multimap is : \n";
    cout << "KEY\tELEMENT\n";
    for (auto itr = mp.begin(); itr != mp.end(); itr++)
        cout << itr->first << "\t" << itr->second << endl;
  
    return 0;
}
