// C++ program to demonstrate working of raw string.
#include <iostream>
using namespace std;
  
int main()
{
    // A Normal string
    string string1 = "Geeks.\nFor.\nGeeks.\n" ; 
  
    // A Raw string
    string string2 = R"(Geeks.\nFor.\nGeeks.\n)"; 
  
    cout << string1 << endl;
  
    cout << string2 << endl;
      
    return 0;
}
