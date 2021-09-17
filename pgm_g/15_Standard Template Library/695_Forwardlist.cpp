// CPP program to illustrate
// push_front() function
#include <forward_list>
#include <iostream>
using namespace std;
  
int main()
{
    forward_list<int> myforwardlist{ 1, 2, 3, 4, 5 };
    myforwardlist.push_front(6);
  
    // Forward list becomes 6, 1, 2, 3, 4, 5
  
    for (auto it = myforwardlist.begin(); it != myforwardlist.end(); ++it)
        cout << ' ' << *it;
}
