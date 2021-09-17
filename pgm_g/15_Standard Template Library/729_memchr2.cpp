// CPP program to illustrate memchr()
#include <iostream>
#include <cstring>
  
int main()
{
    char arr[] = { 'b', 'a', 'd', 'e', 'f', 'A', 'g' };
    char* pc = (char*)std::memchr(arr, 'g', sizeof arr);
    if (pc != NULL)
        std::cout << "search character found\n";
    else
        std::cout << "search character not found\n";
}
