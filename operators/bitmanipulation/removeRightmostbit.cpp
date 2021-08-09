#include <iostream>
using namespace std;
#include <bits/stdc++.h>

using namespace std;
 //remove right most bit start
 
// unsets the rightmost set bit
// of n and returns the result
int func(unsigned int n)
{
    return n & (n - 1);
}
 
// Driver Code
int main()
{
    int n = 7;
    cout<<"The number after unsetting the";
    cout<<" rightmost set bit "<<func(n);
    return 0;
}
