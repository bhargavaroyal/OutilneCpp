// CPP program to illustrate strncmp()
#include <cstring>
#include <iostream>
  
void display(char* abc, char* xyz, int res, int count)
{
    if (res > 0)
        std::cout << xyz << " come-before " << abc;
    else if (res < 0)
        std::cout << abc << " come-before " << xyz;
    else
        std::cout << "First " << count << " characters of string " << 
        abc << " and " << xyz << " are same";
    ;
}
  
int main()
{
    char abc[] = "GeeksforGeeks";
    char xyz[] = "Geeks";
    int res;
    res = std::strncmp(abc, xyz, 6);
    display(abc, xyz, res, 6);
    return 0;
}
