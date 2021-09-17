// Cpp program to illustrate
// Read a bunch of integers from the input stream
// and print them to output stream
  
#include <algorithm>
#include <iostream>
#include <iterator>
  
using namespace std;
int main()
{
  
    // Get input stream and end of stream iterators
    istream_iterator<int> cin_it(cin);
    istream_iterator<int> eos;
  
    // Get output stream iterators
    ostream_iterator<int> cout_it(cout, " ");
  
    // We have both input and output iterators, now we can treat them
    // as containers. Using copy function we transfer data from one
    // container to another.
    // Copy elements from input to output using copy function
    copy(cin_it, eos, cout_it);
  
    return 0;
}
