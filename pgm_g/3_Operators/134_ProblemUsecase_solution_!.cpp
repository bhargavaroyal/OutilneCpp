/*Given three integers a, b and c where c can be either 0 or 1. Without using any arithmetic, relational and conditional operators set the value of a variable x based on below rules –
If c = 0
    x = a
Else // Note c is binary
    x = b.
Examples:
Input: a = 5, b = 10, c = 0;
Output: x = 5

Input: a = 5, b = 10, c = 1;
Output: x = 10*/
#include <iostream>
using namespace std;
  
int calculate(int a, int b, int c)
{
    return ((1 - c) * a) + (c * b); 
}
  
int main()
{
   int a = 5, b = 10, c = 0;
      
   int x = calculate(a, b, c);
   cout << x << endl;
      
   return 0;
}
