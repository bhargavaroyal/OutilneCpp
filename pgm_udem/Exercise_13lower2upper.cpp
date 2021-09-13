#include<iostream>
using namespace std;

void print(int n){
    char c = n;
    //complete this function
    
    if(c >='A' && c<='Z'){
        cout<<"UPPERCASE";
    }else if(c >= 'a' && c<= 'z'){
        cout<<"lowercase";
    }else{
        cout<<"Invalid";
    }
}