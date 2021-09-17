// CPP program to illustrate
// Application of erase() function
#include <deque>
#include <iostream>
using namespace std;
 
int main()
{
    deque<int> mydeque{ 1, 2, 3, 4, 5, 6, 7, 8, 9 };
    deque<int>::iterator i;
    i = mydeque.begin();
    while (i != mydeque.end()) {
        if (*i % 2 == 0)     
 /* Not a good idea to erase inside loop, if you delete last element,
 mydeque.end() cannot be found resulting in infinite loop */
            mydeque.erase(i);
        i++;       
    }
 
    // Printing the deque
    for (auto it = mydeque.begin(); it != mydeque.end(); ++it)
        cout << ' ' << *it;
    return 0;
}
