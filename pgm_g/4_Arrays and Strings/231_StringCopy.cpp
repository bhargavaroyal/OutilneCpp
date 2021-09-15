// C Program  to illustrate the 
// strcpy() function in C/C++
#include <stdio.h>
#include <string.h>
int main()
{
    char src[] = "geeksforgeeks";
  
    // Here destination is large enough
    // to store the src with Null 
    // character at the end
    char dest[14];
  
    // copying src into dest.
    strcpy(dest, src);
    printf("Copied string: %s\n", dest);
      
    return 0;
}
