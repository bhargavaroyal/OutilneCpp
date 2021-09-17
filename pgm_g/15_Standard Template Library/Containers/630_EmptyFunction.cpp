// CPP program to illustrate
// Implementation of empty() function
#include <forward_list>
#include <iostream>
using namespace std;
  
int main()
{
    forward_list<int> myforwardlist{};
    if (myforwardlist.empty()) {
        cout << "True";
    }
    else {
        cout << "False";
    }
    return 0;
}
