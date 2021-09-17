// CPP code to compare two
// hexadecimal string
#include <bits/stdc++.h>
using namespace std;
  
int main()
{
    // Hexadecimal string
    string s1 = "4F";
    string s2 = "A0";
  
    // Converted integer
    unsigned long n1 = stoul(s1, nullptr, 16);
    unsigned long n2 = stoul(s2, nullptr, 16);
  
    // Compare both string
    if (n1 > n2)
        cout << s1 << " is greater than " << s2;
    else if (n2 > n1)
        cout << s2 << " is greater than " << s1;
    else
        cout << "Both " << s1 << " and " << s2 << " are equal";
    return 0;
}
