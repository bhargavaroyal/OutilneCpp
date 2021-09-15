// C code to demonstrate the application of
// strrchr()
 
#include <stdio.h>
#include <string.h>
 
// Driver function
int main()
{
 
    // initializing the denomination
    char denom[] = "Rs 10000000";
 
    // Printing original string
    printf("The original string is : %s", denom);
 
    // initializing the initial number
    char first = '1';
    char* entire;
 
    // Use of strrchr()
    // returns entire number
    entire = strrchr(denom, first);
 
    printf("\nThe denomination value is : %s ", entire);
 
    return (0);
}
