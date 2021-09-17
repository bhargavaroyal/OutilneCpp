// CPP program to illustrate
// Implementation of clear() function
#include <deque>
#include <iostream>
using namespace std;
 
int main()
{
    deque<int> mydeque{ 1, 2, 3, 4, 5 };
 
    mydeque.clear();
    // Deque becomes empty
 
    // Printing the deque
    for (auto it = mydeque.begin(); it != mydeque.end(); ++it)
        cout << ' ' << *it;
    return 0;
}
