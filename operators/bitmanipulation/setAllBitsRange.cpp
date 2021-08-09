#include <iostream>
#include <bitset>
using namespace std;
// function to toggle bits in the given range
int setallbitgivenrange(int n, int l, int r)
{
    cout << "Number: " << n << "start range: " << l << "end range" << r << "\n";
    // calculating a number 'range' havi""ng set
    // bits in the range from l to r and all other
    // bits as 0 (or unset).
    int range = (((1 << (l - 1)) - 1) ^
                 ((1 << (r)) - 1));

    return (n | range);
}
int main()
{
    int n = 17, l = 2, r = 3;
    cout << "the final value: " << setallbitgivenrange(n, l, r)<<endl;

    std::bitset<4> value;

    std::cout << value.set() << '\n';     // 1111
    std::cout << value.set(2, 0) << '\n'; // 1011
    std::cout << value.set(2) << '\n';    // 1111
//set all bits 
    std::bitset<10> x;
    cout << x.set() <<endl; // Sets all bits to '1'

    return 0;
}