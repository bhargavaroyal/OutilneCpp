#include<iostream>
using namespace std;

void print(int ll, int ul,int step){
    // complete this function
    
       for(int i=ll;i<=ul;i=i+step){
            int c=(int)((5.0/9)*(i-32));  

            cout<<i<<"\t"<<c<<endl; 
        }        
}