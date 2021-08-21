#include<iostream>
using namespace std;
int main(){
int i = 3; 

// A pointer to variable i (or stores
// address of i)
int *ptr = &i; 

// A reference (or alias) for i.
int &ref = i; 
cout << "initial value: "<<i <<"pointer value: "<<*ptr <<"reference value: "<<&ref;

}
