// CPP program to illustrate
// Private Destructor
#include <iostream>
using namespace std;
 
class Test {
private:
    ~Test() {}
};
int main()
{
    Test* t = new Test;
    delete t;
}
