// C++ program to show use of this to access member when
// there is a local variable with same name.
#include <iostream>
using namespace std;
class Test {
    int a;
 
public:
    Test() { a = 1; }
 
    // Local parameter 'a' hides object's member
    // 'a', but we can access it using this.
    void func(int a) { cout << this->a; }
};
 
// Driver code
int main()
{
    Test obj;
    int k = 3;
    obj.func(k);
    return 0;
}
