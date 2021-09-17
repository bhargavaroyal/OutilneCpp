// CPP program to illustrate
// Implementation of front() function
#include <iostream>
#include <vector>
using namespace std;
  
int main()
{
    vector<int> myvector;
    myvector.push_back(3);
    myvector.push_back(4);
    myvector.push_back(1);
    myvector.push_back(7);
    myvector.push_back(3);
    // Vector becomes 3, 4, 1, 7, 3
  
    cout << myvector.front();
    return 0;
}
