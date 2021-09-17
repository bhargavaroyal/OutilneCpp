// C++ program to illustrate the
// unique() function
#include <bits/stdc++.h>
using namespace std;
  
// Function for binary_predicate
/*bool compare(int a, int b)
{
    return (abs(a) == abs(b));
}
// This function can also be used and passed inside
// unique(), to get the same result
*/
  
int main()
{
  
    forward_list<int> list = { 1, 1, 1, 1, 2, 2, 2, 2, 3, 3, 3, 2, 4, 4 };
  
    cout << "List of elements before unique operation is: ";
  
    // starts from the first element of the list to the last
    for (auto it = list.begin(); it != list.end(); ++it)
        cout << *it << " ";
  
    // unique operation on forward list
    list.unique();
    cout << "\nList of elements after unique operation is: ";
  
    // starts from the first element of the list to the last
    for (auto it = list.begin(); it != list.end(); ++it)
        cout << *it << " ";
  
    return 0;
}
