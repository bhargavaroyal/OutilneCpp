// DynamicArrays.cpp 

#include "stdafx.h"
#include <iostream>
using namespace std;

int main()
{
	cout << "Enter a postive integer " << endl;
	int length;
	cin >> length;

	int *arr = new int[length];
	cout << "Allocated array of integers of length " << endl;
	arr[0] = 5; // set element 0 to value 5
	delete[] arr;
	
    return 0;
}

