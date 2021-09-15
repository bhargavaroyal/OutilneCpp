// C++ code to demonstrate "lexical_cast()" method
// to convert number to string.
#include <boost/lexical_cast.hpp> // for lexical_cast()
#include <string> // for string
using namespace std;
int main()
{  
   // Declaring float
   float f_val = 10.5;
  
   // Declaring int
   int i_val = 17;
     
   // lexical_cast() converts a float into string
   string strf = boost::lexical_cast<string>(f_val); 
     
   // lexical_cast() converts a int into string
   string stri = boost::lexical_cast<string>(i_val); 
     
   // Displaying string converted numbers
   cout << "The float value in string is : ";
   cout << strf << endl;
   cout << "The int value in string is : ";
   cout << stri << endl;
     
   return 0;   
}
