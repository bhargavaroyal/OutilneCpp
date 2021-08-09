#include <iostream>
#include <bitset>
using namespace std;
int main()
{

    std::bitset<4> num(std::string("0010"));
    bool bit_val = num.test(1); // bit_val value is set to true;
    cout <<"bit value: "<<bit_val;
}