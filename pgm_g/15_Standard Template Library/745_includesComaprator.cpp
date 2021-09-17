// C++ code to demonstrate the working of 
// includes() implementation 2
  
#include<bits/stdc++.h>
using namespace std;
  
// comparator function
bool comp (int i, int j) { return i<j; }
  
int main()
{
    // initializing 1st container
    vector<int> arr1 = { 1, 4, 6, 3, 2 };
      
    // initializing 2nd container
    vector<int> arr2 = { 1, 2, 4 };
      
    // sorting initial containers
    sort(arr1.begin(), arr1.end());
    sort(arr2.begin(), arr2.end());
      
    // using include() check if all elements 
    // of arr2 lie in arr1 
    // using comparator function
    if(includes(arr1.begin(), arr1.end(), arr2.begin(), arr2.end(), comp))
    cout << "All elements of 2nd container are in 1st container";
    else 
    cout << "All elements of 2nd container are not in 1st container";
      
}
