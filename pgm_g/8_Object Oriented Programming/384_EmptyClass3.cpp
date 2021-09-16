#include<iostream>
using namespace std;
 
class Empty { };
 
int main()
{
    Empty* p1 = new Empty;
    Empty* p2 = new Empty;
 
    if (p1 == p2)
        cout << "impossible " << endl;
    else
        cout << "Fine " << endl;
 
    return 0;
}
