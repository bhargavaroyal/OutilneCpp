// CPP program to illustrate
// pop_front() function
#include <forward_list>
#include <iostream>
using namespace std;
  
int main()
{
    forward_list<int> myforwardlist{ 1, 2, 3, 4, 5 };
    myforwardlist.pop_front();
  
    // forward list becomes 2, 3, 4, 5
  
    for (auto it = myforwardlist.begin(); it != myforwardlist.end(); ++it)
        cout << ' ' << *it;
}
