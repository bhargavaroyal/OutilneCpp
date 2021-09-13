#include<iostream>
using namespace std;
 
int main()
{
   int x = 10;
   int *ptr = &x;       // a pointer to a reference
   cout<<"x: " << x << " *ptr: " <<*ptr <<" ptr: " << ptr; 
   	//problem
   //int &*ptr1 = ptr;    // a reference to a pointer 
   //solution: You can't declare a pointer to a reference, like you try to do here:
   //There is no such thing as pointers to a reference. Probably you just wanted a reference, without a pointer:
  //but the inverse, a reference to a pointer, is allowed.
}