// RemoveDuplicatesFromUnsortedArray.cpp

#include "pch.h"
#include <iostream>
using namespace std;
int main() {
	int t;
	cin >> t;
	while (t--)
	{
		int j, i, n;
		cin >> n;
		int arr[n];
		for (i = 0; i < n; i++)
		{
			cin >> arr[i];
		}
		int flag;
		cout << arr[0] << " ";
		for (i = 1; i < n; i++)
		{
			flag = 0;
			for (j = 0; j <= i - 1; j++)
			{
				if (arr[i] == arr[j])
				{
					flag = 1;
					break;
				}
			}
			if (flag == 0)
			{
				cout << arr[i] << " ";
			}
		}cout << endl;
	}
	return 0;
}
