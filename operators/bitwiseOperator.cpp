#include <iostream>

using namespace std;

int main(){
    //bitwise |
    int a =5; // 0101b (0x05)
    int b =12;// 1100b (0x0C)
    int c =a|b;// 1101b (0x0D)
cout << "the value of bitwise operator c =a|b  : "<<c;

// bitwise xor ^
int d = 5; // 0101b (0x05)
int e = 9; // 1001b (0x09)
int f = d ^ e; // 1100b (0x0C)
std::cout << "\n bitwise xor a = " << d << ", b = " << e << ", c = a ^ b = " << f << std::endl;
/*int computeXOR(int n)
{
    if (n % 4 == 0)
        return n;
    if (n % 4 == 1)
        return 1;
    if (n % 4 == 2)
        return n + 1;
    else
        return 0;
}*/
//& - bitwise AND

int g = 6; // 0110b (0x06)
int h = 10; // 1010b (0x0A)
int i = g & h; // 0010b (0x02)
std::cout << "bitwise and a = " << g << ", b = " << h << ", c = a & b = " << i << std::endl;

//<< - left shift
int j = 1; // 0001b
int k = j << 1; // 0010b
std::cout << "<< - left shift a = " << j << ", b = a << 1 b = " << k << std::endl;

//>> - right shift

int l = 2; // 0010b
int m = l >> 1; // 0001b
std::cout << ">> - right shift a = " << l << ",b = a >> 1 b = " << m << std::endl;




}