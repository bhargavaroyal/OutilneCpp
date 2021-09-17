// C++ program to demonstrate accessing of variables
// in normal way, i.e., using "::"
#include <iostream>
using namespace std;
  
namespace geek
{
    int rel = 300; 
}
  
int main()
{
    // variable ‘rel’ accessed 
    // using scope resolution operator
    cout << geek::rel << "\n";  // prints 300
  
    return 0;
}
