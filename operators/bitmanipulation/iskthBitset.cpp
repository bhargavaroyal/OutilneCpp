#include <iostream>
using namespace std;

int main(){
    int n=5, k=1;
fun(n,k);

}
void fun(int n, int k ){
    if ((n >> (k - 1)) & 1)
        cout << "SET";
    else
        cout << "NOT SET";
}
