// CPP program to demonstrate []
// operator
#include <iostream>
using namespace std;
int main()
{
    char name[] = "Ramswarup Tushar Nilesh Subhash";
  
    // Both of the statement prints same thing
    cout << name[5] << endl;
    cout << 5 [name] << endl;
    return 0;
}
