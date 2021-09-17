// C++ function for illustration
// multimap::count() function
#include <bits/stdc++.h>
using namespace std;
  
int main()
{
  
    // initialize container
    multimap<int, int> mp;
  
    // insert elements in random order
    mp.insert({ 2, 30 });
    mp.insert({ 1, 40 });
    mp.insert({ 2, 60 });
    mp.insert({ 2, 20 });
    mp.insert({ 1, 50 });
    mp.insert({ 4, 50 });
  
    // count the number of times
    // 1 is there in the multimap
    cout << "1 exists " << mp.count(1) 
         << " times in the multimap\n";
  
    // count the number of times
    // 2 is there in the multimap
    cout << "2 exists " << mp.count(2) 
         << " times in the multimap\n";
  
    return 0;
}
