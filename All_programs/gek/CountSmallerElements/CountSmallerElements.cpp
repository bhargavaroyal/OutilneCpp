// CountSmallerElements.cpp 

#include "pch.h"
#include <iostream>
using namespace std;
int main()
{
	int t(0);
	cin >> t;
	int n(0);
	while (t--)
	{
		cin >> n;
		int *arr = new int[n];
		int count(0);
		for (int i = 0; i < n; i++)
		{
			cin >> arr[i];
		}
		for (int i = 0; i < n; i++)
		{
			if (i == n)
			{
				cout << 0 << endl;
				break;
			}
			for (int j = i + 1; j < n; j++)
			{
				if (arr[i] > arr[j])
				{
					count++;
				}
			}
			cout << count << " ";
			count = 0;
		}
		delete arr;
		cout << endl;
	}
}
