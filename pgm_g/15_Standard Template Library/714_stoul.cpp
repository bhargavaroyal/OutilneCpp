// CPP code to convert hexadecimal
// string to int
#include <bits/stdc++.h>
using namespace std;
  
int main()
{
    // Hexadecimal string
    string str = "FF";
  
    // Converted integer
    unsigned long num = stoul(str, nullptr, 16);
  
    // Printing the integer
    cout << num << "\n";
  
    // Hexadecimal string
    string st = "FFFFFF";
  
    // Converted long long
    unsigned long long val = stoull(st, nullptr, 16);
  
    // Printing the long long
    cout << val;
    return 0;
}
