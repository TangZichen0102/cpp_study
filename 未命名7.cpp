#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n = 0;
	int i = 0;
	int j = 0;
	cin >> n >> i >> j;
	for(int x = 1; x <= n; ++x)
	{
		printf("(%d,%d)", i, x);
	}
	cout << endl;
	for(int y = 1; y <= n; ++y)
	{
		printf("(%d,%d)", y, j);
	}
	cout << endl;
	int y = i;
	int x = j;
	for(; x > 1 && y > 1; --x, --y);
	for(; x <= n && y <= n; ++x, ++y)
	{
		printf("(%d,%d)", y, x);
	}
	cout << endl;
	y = i;
	x = j;
	for(; y < n && x > 1; ++y, --x);
	for(; y >= 1 && x <= n; --y, ++x)
	{
		printf("(%d,%d)", y, x);
	}
	cout << endl;
	return 0;
} 
