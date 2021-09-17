// Cpp program to illustrate
  
// Read a bunch of integers from the stream
// print the sorted order of even integers only
  
#include <algorithm>
#include <iostream>
#include <iterator>
#include <vector>
  
using namespace std;
int main()
{
  
    // Define a vector to store the even integers received from input
    vector<int> vi;
  
    // Get input stream and end of stream iterators
    istream_iterator<int> cin_it(cin);
    istream_iterator<int> eos;
  
    // Get output stream iterators
    ostream_iterator<int> cout_it(cout, " ");
  
    // Copy even integer elements from input to vector using for_each function
    for_each(cin_it, eos, [&](int a) {
        if (a % 2 == 0) {
            // if a is even push it to vector
            vi.push_back(a);
        }
    });
  
    // Sort the vector
    sort(vi.begin(), vi.end());
  
    // Copy elements from vector to output
    copy(vi.begin(), vi.end(), cout_it);
  
    return 0;
}
