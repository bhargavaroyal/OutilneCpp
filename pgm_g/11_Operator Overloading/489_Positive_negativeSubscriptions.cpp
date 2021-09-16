// CPP program illustrating the
// positive and negative subscripts
#include <iostream>
using namespace std;
  
// Driver Method
int main()
{
    int intArray[1024];
    for (int i = 0, j = 0; i < 1024; i++) {
        intArray[i] = j++;
    }
  
    // 512
    cout << intArray[512] << endl;
  
    // 257
    cout << 257 [intArray] << endl;
  
    // pointer to the middle of the array
    int* midArray = &intArray[512];
  
    // 256
    cout << midArray[-256] << endl;
  
    // unpredictable, may crash
    cout << intArray[-256] << endl;
}
