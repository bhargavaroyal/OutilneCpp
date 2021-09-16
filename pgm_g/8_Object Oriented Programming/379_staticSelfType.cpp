// A class can have a static member of self type
#include<iostream>
  
using namespace std;
  
class Test {
  static Test self;  // works fine
  
  /* other stuff in class*/ 
  
};
  
int main()
{
  Test t;
  getchar();
  return 0;
}
