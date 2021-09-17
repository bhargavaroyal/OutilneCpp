// CPP program to illustrate
// application Of front() and back() function
#include <iostream>
#include <queue>
using namespace std;
  
int main()
{
    queue<int> myqueue;
    myqueue.push(8);
    myqueue.push(7);
    myqueue.push(6);
    myqueue.push(5);
    myqueue.push(4);
    myqueue.push(3);
    myqueue.push(2);
    myqueue.push(1);
  
    // Queue becomes 1, 2, 3, 4, 5, 6, 7, 8
  
    if (myqueue.front() > myqueue.back()) {
        cout << myqueue.front() - myqueue.back();
    }
    else if (myqueue.front() < myqueue.back()) {
        cout << myqueue.back() - myqueue.front();
    }
    else
        cout << "0";
}
