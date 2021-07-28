#include <iostream>
#include "fun.h"
void fun(int); // Prototype declaration Must specify return type, name, and argument list types


int main(){

    fun(2);
    fun (3,4);
    
}
void fun (int x){ //Must match the prototype
std::cout << "the provided value is : "<< x<< std::endl;
    }

void fun (int x, int y){
        std::cout<< "provided two values:  "<<x <<"second value: "<<y;
    }
