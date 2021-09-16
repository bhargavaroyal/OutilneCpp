#include <iostream>
using namespace std;
 
class Base final {
    // body
};
class Derived : public Base // compile error because base class is final
{
    // body
};
 
int main() { return 0; }
