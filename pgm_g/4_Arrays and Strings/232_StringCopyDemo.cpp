// C Program  to illustrate the problem in 
// strcpy() function in C/C++
#include <stdio.h>
#include <string.h>
int main()
{
    char src[] = "geeksforgeeks";
  
    // Here destination is not large
    // enough to store the src. so the
    // behaviour of strcpy is unspecified.
    // program may crashed, but its
    // printing geeksforgeeks
    char dest[2];
      
    // copying src into dest.
    strcpy(dest, src);
    printf("Copied string: %s\n", dest);
      
    return 0;
}
