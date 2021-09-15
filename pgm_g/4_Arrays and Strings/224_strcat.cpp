// CPP program to demonstrate 
// strncat
#include <cstring>
#include <iostream>
  
using namespace std;
  
int main()
{
    char dest[25] = "This is an example";
    char src[50] = " to show working of strncat() this is not added";
      
strncat(dest, src, 29);
    cout << dest ;
    return 0;
  
}
