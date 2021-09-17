// CPP program to illustrate
// Implementation of front() function
#include <deque>
#include <iostream>
using namespace std;
  
int main()
{
    deque<int> mydeque;
    mydeque.push_back(3);
    mydeque.push_back(4);
    mydeque.push_back(1);
    mydeque.push_back(7);
    mydeque.push_back(3);
    // Queue becomes 3, 4, 1, 7, 3
  
    cout << mydeque.front();
    return 0;
}
