#include <iostream>
using namespace std;

void doXORSwap(int& a, int& b)
{
// Need to add a check to make sure you are not swapping the same
// variable with itself. Otherwise it will zero the value.
cout<<"the value of a before "<<a<<"value of b: "<<b;
if (&a != &b)
{
// XOR swap
a ^= b;
b ^= a;
a ^= b;
cout<<"the value of a after "<<a<<"value of b: "<<b;
}
}

int main()
{
    int a = 42;
    int b = 64;
    // XOR swap a^c=~(a&c)&(a|c)
    a ^= b;
    b ^= a;
    a ^= b;
   // doXORSwap(&a,&b);
    std::cout << "a = " << a << ", b = " << b << "\n";
    
    
}
