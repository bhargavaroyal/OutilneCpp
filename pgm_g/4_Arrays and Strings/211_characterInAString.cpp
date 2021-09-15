// CPP code to extract characters from a given string
  
#include <iostream>
using namespace std;
  
// Function to demonstarte std::string::at
void extractChar(string str)
{
    char ch;
  
    // Calculating the length of string
    int l = str.length();
    for (int i = 0; i < l; i++) {
        ch = str.at(i);
        cout << ch << " ";
    }
}
  
// Driver code
int main()
{
    string str("GeeksForGeeks");
    extractChar(str);
    return 0;
}
