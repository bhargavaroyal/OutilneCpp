// CPP program to illustrate
// Implementation of empty() function
#include <deque>
#include <iostream>
using namespace std;
  
int main()
{
    deque<int> mydeque;
    mydeque.push_front(1);
  
    // Deque becomes 1
  
    if (mydeque.empty()) {
        cout << "True";
    }
    else {
        cout << "False";
    }
    return 0;
}
