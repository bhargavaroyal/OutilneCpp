#include <iostream>
using namespace std;
#include <bits/stdc++.h>

using namespace std;
 //remove right most bit start
 
// unsets the rightmost set bit
// of n and returns the result
void func(unsigned int n)
{
     for (int bit = 0; bit < 32; bit++)
   {
        // Checking whether bit position is
        // set or not
        if ((n >> bit) & 1)
        {
            // If bit position is found set,
            // we flip this bit by xoring
            // given number and number with
            // bit position set
            n = n ^ (1ll << bit);
            break;
        }
        
}
cout<<"The number after unsetting the"; 
    cout<<" rightmost set bit "<< n
}

// Driver Code
int main()
{
     int N = 12;
     
    func(N);
    return 0;
}
