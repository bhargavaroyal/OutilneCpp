#include <iostream>
 
using namespace std;
 
int main()
{
    unsigned short a;
 
    for (a = 65532; a < 65536; a++)
        cout << a << "\n";
 
    return 0;
}
/*Will this code print ‘a’ till it becomes 65536? Well the answer is indefinite loop, because 
here ‘a’ is declared as a short and its valid range is 0 to +65535. When ‘a’ tries to become 65536
 through a++, the range is exceeded and as a result the first number from the range(i.e. 0) gets
  assigned to a. Hence the condition 
“a < 65536” is satisfied and control remains within the loop.*/