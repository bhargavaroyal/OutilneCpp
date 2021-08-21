// C++ program to demonstrate
// the problem with 'char'
#include <iostream>
 
using namespace std;
 
int main()
{
    for (char a = 0; a <= 225; a++)
        cout << a;
    return 0;
}
/*a is declared as char. Here the loop is working from 0 to 225. So, it should print from 0 to 225, 
then stop. But it will generate a infinite loop. The reason for this is the valid range of character 
datatype is -128 to 127. When ‘a’ become 128 through a++, the range is exceeded and as a result the 
first number from negative side of the range (i.e. -128) gets assigned to a. 
As a result of this ‘a’ will never reach at point 225. so it will print the infinite series of character.*/