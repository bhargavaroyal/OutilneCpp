// TheDiceProblem.cpp 

#include "pch.h"
#include <iostream>
using namespace std;
int main()
{
	int t(0), num(0);
	cin >> t;
	while (t--)
	{
		cin >> num;
		if (num == 1)
		{
			cout << 6 << endl;
		}
		else if (num == 2)
		{
			cout << 5 << endl;
		}
		else if (num == 3)
		{
			cout << 4 << endl;
		}
		else if (num == 4)
		{
			cout << 3 << endl;
		}
		else if (num == 5)
		{
			cout << 2 << endl;
		}
		else
		{
			cout << 1 << endl;
		}
	}
}