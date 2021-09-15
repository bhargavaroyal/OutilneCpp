// CPP code for illustration
// of stol() function.
#include <bits/stdc++.h>
using namespace std;
  
int main()
{
  
    // converting decimal number.
    string dec_num = "9876543210";
    cout << "dec_num = " << 
    stol(dec_num, nullptr, 10) << "\n";
  
    // converting hexadecimal number.
    string hex_num = "FFFFFF";
    cout << "hex_num = " << 
    stol(hex_num, nullptr, 16) << "\n";
  
    // converting binary number.
    string binary_num = "1111111";
    cout << "binary_num = " << 
    stol(binary_num, nullptr, 2) << "\n";
  
    return 0;
}
