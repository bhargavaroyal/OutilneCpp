// Power_Of_Pow_Odd_Numbers.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
using namespace std;

int main()
{
	int t(0);
	cin >> t;
	while (t--)
	{
		int sum(0), n(0);
		int j = 1, result(0);
		cin >> n;
		for (int i = 0; i < n; i++)
		{
			result += j * j;
			j++;
			j++;
		}
		cout << result << endl;
	}
}