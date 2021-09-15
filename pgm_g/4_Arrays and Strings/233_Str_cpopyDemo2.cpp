// C Program  to illustrate the problem in 
// strcpy() function in C/C++
#include <stdio.h>
#include <string.h>
int main()
{
    char src[] = "geeksforgeeks";
      
    // The destination sting size is 8
    // which is less than length of src.
    char dest[8];
      
    // copying 8 bytes of src into dest.
    // dest is not NULL terminated.
    strncpy(dest, src, 8);
      
    // using strlen function on non terminated.
    // string which can cause segfault.
    int len = strlen(dest);
      
    printf("Copied string: %s\n", dest);
    printf("Length of destination string: %d\n", len);
      
    return 0;
}
