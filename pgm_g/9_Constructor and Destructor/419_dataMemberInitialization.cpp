#include<iostream>
  
using namespace std;
  
class Test {
  private:    
    int y;
    int x;    
  public:
    Test() : x(10), y(x + 10) {}
    void print();
};
  
void Test::print()
{ 
   cout<<"x = "<<x<<" y = "<<y; 
}
  
int main()
{
    Test t;
    t.print();
    getchar();
    return 0;    
}
