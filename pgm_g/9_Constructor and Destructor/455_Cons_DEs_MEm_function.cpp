#include <iostream>
using namespace std;
  
class Test
{
public:
    Test()  { cout << "Constructor is executed\n"; }
    ~Test() { cout << "Destructor is executed\n";  }
    void show()  {  Test();  this->Test::~Test();  }
};
  
int main()
{
    Test t;
    t.show();
    return 0;
}
