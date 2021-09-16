// CPP program to illustrate
// Private Destructor
 
#include <bits/stdc++.h>
using namespace std;
 
class Test {
public:
    Test() // Constructor
    {
        cout << "Constructor called\n";
    }
 
private:
    ~Test() // Private Destructor
    {
        cout << "Destructor called\n";
    }
};
 
int main()
{
    Test* t = (Test*)malloc(sizeof(Test));
    return 0;
}
