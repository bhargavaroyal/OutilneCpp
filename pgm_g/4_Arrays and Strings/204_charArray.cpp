// CPP program to illustrate char
#include <iostream>
using namespace std;
  
int main()
{
  
    char str[] = "Hello";
    // or char str1[]={'H', 'e', 'l', 'l', 'o', '\0'};
  
    // modify string to "Hollo"
    str[1] = 'o';
  
    cout << str << endl;
  
    return 0;
}
