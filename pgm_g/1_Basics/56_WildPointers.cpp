#include <iostream>
using namespace std;
 
// Driver code
int main()
{
   int *p;  /* wild pointer */
   /* Some unknown memory location is being corrupted. 
   This should never be done. */ 
  *p = 12; 



int  *p; /* wild pointer */
  int a = 10;
  p = &a;  /* p is not a wild pointer now*/
  *p = 12; /* This is fine. Value of a is changed */ 



   int *p = (int *)malloc(sizeof(int));
  *p = 12; /* This is fine (assuming malloc doesn't return NULL) */


    return 0;
}
