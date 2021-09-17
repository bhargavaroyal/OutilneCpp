// CPP program to illustrate
// Implementation of back() function
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
    myvector.push_back(2);
    // Vector becomes 3, 4, 1, 7, 2
  
    cout << myvector.back();
    return 0;
}
