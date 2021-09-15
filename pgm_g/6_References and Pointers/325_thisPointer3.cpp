#include<iostream>
class X {
   void fun() const volatile {
  
     // this is passed as hidden argument to fun().
     // Type of this is const volatile X* const
    }
};
