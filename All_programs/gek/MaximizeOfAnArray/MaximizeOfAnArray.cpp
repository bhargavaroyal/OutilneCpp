// MaximizeOfAnArray.cpp 

#include "stdafx.h"
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
	int t(0), n(0), ele(0);
	long long int sum(0);
	vector<int> v;

	cin >> t;
	while (t > 0)
	{
		cin >> n;
		sum = 0;
		for (int i = 0; i < n; i++)
		{
			cin >> ele;
			v.push_back(ele);
		}
		sort(v.begin(), v.end());
		for (int i = 0; i < n; i++)
		{
			sum = sum + i * v[i];
		}
		cout << sum << endl;
		v.clear();
		t--;
	}
    return 0;
}

