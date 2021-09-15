// C Program  to illustrate the 
// strcpy() function in C/C++
#include <stdio.h>
#include <string.h>
int main()
{
    char src[] = "geeksforgeeks";
      
    // The destination string size is 14.
    char dest[14];
      
    // copying n bytes of src into dest.
    strncpy(dest, src, 14);
    printf("Copied string: %s\n", dest);
      
    return 0;
}
