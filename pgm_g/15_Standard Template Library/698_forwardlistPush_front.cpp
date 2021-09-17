// CPP program to illustrate
// application Of pop_front() function
#include <forward_list>
#include <iostream>
using namespace std;
  
int main()
{
    forward_list<int> myforwardlist{}, newforwardlist{};
    myforwardlist.push_front(8);
    myforwardlist.push_front(7);
    myforwardlist.push_front(6);
    myforwardlist.push_front(5);
    myforwardlist.push_front(4);
    myforwardlist.push_front(3);
    myforwardlist.push_front(2);
    myforwardlist.push_front(1);
  
    // Forward list becomes 1, 2, 3, 4, 5, 6, 7, 8
  
    while (!myforwardlist.empty()) {
        newforwardlist.push_front(myforwardlist.front());
        myforwardlist.pop_front();
    }
    for (auto it = newforwardlist.begin(); it != newforwardlist.end(); ++it)
        cout << ' ' << *it;
}
