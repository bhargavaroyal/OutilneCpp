// CPP program to illustrate
// application Of front() and back() function
#include <iostream>
#include <list>
using namespace std;
  
int main()
{
    list<int> mylist{};
    mylist.push_front(8);
    mylist.push_front(7);
    mylist.push_front(6);
    mylist.push_front(5);
    mylist.push_front(4);
    mylist.push_front(3);
    mylist.push_front(2);
    mylist.push_front(1);
  
    // list becomes 1, 2, 3, 4, 5, 6, 7, 8
  
    if (mylist.front() > mylist.back()) {
        cout << mylist.front() - mylist.back();
    }
    else if (mylist.front() < mylist.back()) {
        cout << mylist.back() - mylist.front();
    }
    else
        cout << "0";
}
