// CPP program to demonstrate working of strchr()
#include <iostream>
#include <cstring>
using namespace std;
// Driver code
int main()
{
    char str[] = "My name is Ayush";
    char ch = 'A', ch2 = 'z';
    if (strchr(str, ch) != NULL)
        cout << ch << " "
             << "is present in string" << endl;
    else
        cout << ch << " "
             << "is not present in string" << endl;
    if (strchr(str, ch2) != NULL)
        cout << ch2 << " "
             << "is present in string" << endl;
    else
        cout << ch2 << " "
             << "is not present in string" << endl;
    return 0;
}
