// ReverseSubArray.cpp

#include "stdafx.h"
#include <iostream>
#include <vector>
using namespace std;

int main()
{
	int t(0), n(0), ele(0), l(0), r(0);
	cin >> t;
	while (t--)
	{
		cin >> n;
		vector<int> v;
		for (int i = 0; i < n; i++)
		{
			cin >> ele;
			v.push_back(ele);
		}
		cin >> l >> r;
		swap(v.at(l - 1), v.at(r - 1));
		for (int i = 0; i < n; i++)
		{
			cout << v[i] << endl;
		}
		cout << endl;
		v.clear();
	}
	return 0;
}