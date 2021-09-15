// CPP code for illustration of stoll()
// function when invalid_argument 
// exception is thrown.
#include <bits/stdc++.h>
using namespace std;
   
int main() {
       
    // An invalid input string that has no
    // integer part.
    string invalid_num = "abcf$#@de";
       
    // stoll() throws invalid_argument exception
    // when conversion process fails.
    try{
        cout << stoll(invalid_num) << "\n";
    }
       
    // catch invalid_argument exception.
    catch(const std::invalid_argument){
        cerr << "Invalid argument" << "\n";
    }
    return 0;
}
