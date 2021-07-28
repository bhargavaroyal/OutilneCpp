#include <iostream>
#include <string>
using namespace std;

bool True(string id)
{
    cout << "true value: " << id << endl;

    return true;
}
bool False(string id)
{
    cout << "false: " << id << endl;
    return false;
}
int main()
{
    bool result;
    cout << "print A true: " << True("A") << endl;
    cout << "print A false: " << False("A") << endl;
    result = False("A") || False("B") && False("C");
    cout << "\nresult for all false logic:" << result;
    result = True("A") || False("B") && False("C");
    cout << "\nresult for true false logic:" << result;
    result = False("A") || False("B") && True("C");
    cout << "\nresult for 3 logic:" << result;
    result = False("A") || True("B") && True("C");
    cout << "\nresult for 4 logic:" << result;
    result = False("A") || True("B") && False("C");
    cout << "\nresult for 5 logic:" << result;
}
