// c++ program to demonstrate
// example of wcslen() function.
  
#include <bits/stdc++.h>
using namespace std;
  
int main()
{
  
    // Get the string to be used
    wchar_t str[] = L"geeks";
  
    // Get the length of the string using wcslen()
    wcout << L"The length of '" << str
          << L"' is =" << wcslen(str) << endl;
  
    return 0;
}
