/*Given 4 integers a, b, y, and x, where x can only either 0 and 1 only. The ask is as follows: 
If 'x' is 0, 
   Assign value 'a' to variable 'y' 
Else (If 'x' is 1)
   Assign value 'b' to variable 'y'.
Note: – You are not allowed to use any conditional operator (including the ternary operator) or any arithmetic operator (+, -, *, /).
Examples : 
Input :  a = 5 , b = 10, x = 1
Output :  y = 10

Input : a = 5, b = 10 , x = 0
Output :  y = 5
*/
// C/C++ program to assign value to y according
// to value of x
 
#include <iostream>
using namespace std;
 
// Function to assign value to y according
// to value of x
int assignValue(int a, int b, int x)
{
    int y;
    int arr[2];
 
    // Store both values in an array
    // value 'a' at 0th index
    arr[0] = a;
 
    // Value 'b' at 1th index
    arr[1] = b;
 
    // Assign value to 'y' taking 'x' as index
    y = arr[x];
 
    return y;
}
 
// Driver code
int main()
{
    int a = 5;
    int b = 10;
    int x = 0;
 
    cout << "Value assigned to 'y' is "
         << assignValue(a, b, x);
    return 0;
}
