#include <iostream>
#include<bitset>
using namespace std;
int main (){
bitset<4> num(std::string("0100"));
cout <<num.flip(2) <<endl; // num is now 0000
cout << num.flip(0) <<endl; // num is now 0001
cout << num.flip() <<endl; // num is now 1110 (flips all bits)
}
