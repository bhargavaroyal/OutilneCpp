// CPP program to illustrate
// Application of size() function
#include <iostream>
#include <vector>
using namespace std;
 
int main()
{
    int sum = 0;
    vector<int> myvector{ 1, 5, 6, 3, 9, 2 };
    while (myvector.size() > 0) {
        sum = sum + myvector.back();
        myvector.pop_back();
    }
    cout << sum;
    return 0;
}
