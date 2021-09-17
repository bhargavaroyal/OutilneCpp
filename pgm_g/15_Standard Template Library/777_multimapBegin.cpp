// C++ function to illustrate
// the multimap::begin() function
#include <bits/stdc++.h>
using namespace std;
  
int main()
{
  
    // initialize container
    multimap<int, int> mp;
  
    // insert elements in random order
    mp.insert({ 2, 30 });
    mp.insert({ 1, 40 });
    mp.insert({ 3, 60 });
    mp.insert({ 4, 20 });
    mp.insert({ 5, 50 });
  
    auto ite = mp.begin();
  
    cout << "The first element is: ";
    cout << "{" << ite->first << ", "
         << ite->second << "}\n";
  
    // prints the elements
    cout << "\nThe multimap is : \n";
    cout << "KEY\tELEMENT\n";
    for (auto itr = mp.begin(); itr != mp.end(); ++itr) {
        cout << itr->first
             << '\t' << itr->second << '\n';
    }
    return 0;
}
