// C++ program to demonstrate working of unnamed 
// namespaces
#include <iostream>
using namespace std;
  
// unnamed namespace declaration
namespace 
{
   int rel = 300; 
}
  
int main()
{
   cout << rel << "\n"; // prints 300
   return 0;
}
