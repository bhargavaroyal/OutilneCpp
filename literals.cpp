#include <iostream>

using namespace std;

int main(){
//integeral literal
//decimal
int d =19;
//octal 
int o = 052;
//hex 
int x = 0x2a;
//binary
int b =0b10101;
//unsigned suffix

unsigned int u_1 = 42u;
unsigned long long l1 = 18446744073709550592ull; // C++11
unsigned long long l2 = 18'446'744'073'709'550'592llu; // C++14
unsigned long long l3 = 1844'6744'0737'0955'0592uLL; // C++14
unsigned long long l4 = 184467'440737'0'95505'92LLU; // C++14
std::cout<< "\n the different integer literals: ";
std::cout << "interger: "<<d <<"\n octal: " <<o <<"\n binary: "<<b;

std::cout<<"\n unsigned: "<< u_1 << "\n unsigned long: "<<l1 <<"\n l2: "<<l2 <<"\n l3: "<<l3 
<< "\n l4: " <<l4;
//boolean literal
bool b1 = true;
std::cout <<"\n b1 before : "<<b1;
if (true){
    b1 = false;
    std::cout <<"\n b1 after : "<<b1;

}
//nullptr
cout <<"\n nullptr example: ";
int *p = nullptr;
if (p){ std::cout<<"true"; }
else{cout<<"false";}
}