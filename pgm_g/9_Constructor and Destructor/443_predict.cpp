#include <iostream>
using namespace std;
  
class Point
{
    int x, y;
public:
   Point(const Point &p) { x = p.x; y = p.y; }
};
  
int main()
{
    Point p1;  // COMPILER ERROR
    Point p2 = p1;
    return 0;
}
