// A class can have a pointer to self type
#include<iostream>
  
using namespace std;
  
class Test {
  Test * self; //works fine
  
  /* other stuff in class*/ 
  
};
  
int main()
{
  Test t;
  getchar();
  return 0;
}

