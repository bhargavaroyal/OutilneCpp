// c++ program to demonstrate
// example of isunordered() function.
  
#include <bits/stdc++.h>
using namespace std;
  
int main()
{
  float x=6.3;
  float y=sqrt(-9);
  
  cout<<"The value of x is= "<< x << endl;
  cout<<"The value of y is= "<< y << endl;
  
  //Now it return whether x or y are unordered values or not
  cout<<"isunordered(x, y) = "<<isunordered(x, y);
  return 0;
}
