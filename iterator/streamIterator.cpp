#include <iostream>
#include <vector>
#include<istream>
#include<strstream>
#include<iterator>
using namespace std;

using namespace std;
int main (){
istringstream istr("1\t 2 3 4");
vector<int> v;
std::copy(
// Iterator which will read stream data as integers.
std::istream_iterator<int>(istr),
// Default constructor produces end-of-stream iterator.
std::istream_iterator<int>(),
std::back_inserter(v));
// Print vector contents.
std::copy(v.begin(), v.end(),
//Will print values to standard output as integers delimeted by " -- ".
std::ostream_iterator<int>(std::cout, " -- "));
    return 0;
}