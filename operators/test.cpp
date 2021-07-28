#include <iostream>

using namespace std;
int main() {
cout <<"the test sample: ";
float total = 0;
for(float a = 1.98; a <= 2.00; a += 0.01f) {
total += a;
cout <<"\n the value: "<< total;
cout <<"\n the a: "<< a;
}
}