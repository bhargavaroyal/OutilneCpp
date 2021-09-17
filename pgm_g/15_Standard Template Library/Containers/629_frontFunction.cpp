// CPP program to illustrate
// Implementation of front() function
#include <forward_list>
#include <iostream>
using namespace std;
  
int main()
{
    forward_list<int> myforwardlist{ 1, 2, 3, 4, 5 };
    cout << myforwardlist.front();
    return 0;
}
