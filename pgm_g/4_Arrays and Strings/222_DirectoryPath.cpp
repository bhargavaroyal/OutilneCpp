// C program to find directory path
#include <string.h>
#include<stdio.h>
   
int main()
{
   char string[]={"/home/test/sample"};
   int len;
     
    //position of last char
    char* pos;
 
    // save length of string
    len = strlen(string);
 
    // Find the last character with
    pos = strchr(string,'/') ;
    printf("%s\n",string);
 
    // replace last occurrence of / with NULL character.
    *pos='\0';                 
    printf("%s\n",string);
 
    return 0;
}
