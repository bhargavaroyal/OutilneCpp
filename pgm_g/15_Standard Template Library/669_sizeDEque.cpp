// CPP program to illustrate
// Implementation of size() function
#include <deque>
#include <iostream>
using namespace std;
  
int main()
{
    int sum = 0;
    deque<int> mydeque;
    mydeque.push_back(1);
    mydeque.push_back(8);
    mydeque.push_back(3);
    mydeque.push_back(6);
    mydeque.push_back(2);
  
    // Deque becomes 1, 8, 3, 6, 2
  
    cout << mydeque.size();
  
    return 0;
}
