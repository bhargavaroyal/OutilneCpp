// CountSquares.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
using namespace std;

class Solution {
public:
	int countSquares(int N) {
		// code here

		int count(0);

		for (int i = 1; i <= N; i++)
		{
			if (i*i >= N)
			{
				break;
			}
			count++;
		}
		return count;
	}
};

int main()
{
	int t(0);
	long long n(0);
	cin >> t;

	while (t--)
	{
		int count(0);
		cin >> n;
		Solution obj;

		cout << obj.countSquares(N) << endl;
	}
	return 0;
}

