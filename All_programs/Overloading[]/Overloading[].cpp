// Overloading[].cpp 

#include "stdafx.h"
#include <iostream>
using namespace std;

class Overload
{
	int arr[3];
public:
	Overload()
	{
		arr[0] = 1;
		arr[1] = 22;
		arr[2] = 3;
	}
	int operator[](int i)
	{
		return arr[i];
	}
};

int main()
{
	Overload obj;
	cout << obj[1] << endl;
    return 0;
}

