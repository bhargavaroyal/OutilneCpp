// A class cannot have non-static object(s) of self type.
#include<iostream>
  
using namespace std;
  
class Test {
  Test self; // Error
  
  /* other stuff in class*/ 
  
};
  
int main()
{
  Test t;
  getchar();
  return 0;
}
