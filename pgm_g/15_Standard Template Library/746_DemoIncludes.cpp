// C++ code to demonstrate the application of 
// includes() 
  
#include<bits/stdc++.h>
using namespace std;
  
int main()
{
    // lottery numbers
    vector<int> lottery = { 1, 4, 6, 3, 2, 54 , 32 };
      
    // Numbers in user's card
    vector<int> user = { 1, 2, 4, 6 };
      
    // sorting initial containers
    sort(lottery.begin(), lottery.end());
    sort(user.begin(), user.end());
      
    // using include() check if all elements 
    // of user are present as lottery numbers
    if(includes(lottery.begin(), lottery.end(), user.begin(), user.end()))
    cout << "User has won lottery ( all numbers are lottey numbers )";
    else 
    cout << "User has not won the lottery";
      
}
