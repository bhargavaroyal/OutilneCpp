// c++ program to demonstrate
// example of wmemmove() function.
#include <bits/stdc++.h>
using namespace std;
 
int main()
{
   
    // Maximum length of the destination string
    wchar_t* dest_buf=L"A computer
                     science portal for geeks";
    wchar_t dest[wcslen(dest_buf)+1];
   
    // Maximum length of the source string
    wchar_t* src_buf=L"geeksforgeeks";
    wchar_t src[wcslen(src_buf)+1];
     
    // Initialize the destination string
    wcscpy(dest,dest_buf);
   
    wprintf(L"Destination: %ls\n", dest);
   
    // Initialize the source string
    wcscpy(src,src_buf );
   
    wprintf(L"Source: %ls\n", src);
    wmemmove(dest+2, src+3, 5);
    wprintf(L"After modication, destinstion:
                                   %ls\n", dest);
    return 0;
}
