#include <stdio.h>
  
void fun()
{
   #define printf(x, y) printf(x, 10);
}
  
int main()
{
    int i = 10;
    fun();
    i = 20;
    printf("%d", i);
    return 0;
}
