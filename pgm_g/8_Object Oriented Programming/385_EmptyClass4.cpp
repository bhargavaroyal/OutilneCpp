#include<iostream>
using namespace std;
 
class Empty { };
 
class Derived: Empty { int a; };
 
int main()
{
    cout << sizeof(Derived);
    return 0;
}
