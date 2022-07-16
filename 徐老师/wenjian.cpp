#include <bits/stdc++.h>
using namespace std;
bool pd(char a, char b)
{
	if ((a == 'R' && b == 'S') || (a == 'S' && b == 'P') || (a == 'P' && b == 'R'))
		return 1;
	else if ((b == 'R' && a == 'S') || (b == 'S' && a == 'P') || (b == 'P' && a == 'R'))
		return 0;
}
int main()
{
	char a;
	int n, c, d, x1 = 0, x2 = 0;
	string x, y;
	cin >> n >> c >> d;
	for (int i = 1; i <= c; i++)
		cin >> a, x += a;
	for (int i = 1; i <= d; i++)
		cin >> a, y += a;
	for (int i = 1; i <= n / c; i++)
		x += x;
	for (int i = 1; i <= n / d; i++)
		y += y;
	for (int i = 1; i <= n; i++)
	{
		if (pd(x[i], y[i]) == 1)
			x1++;
		else if (pd(x[i], y[i]) == 0)
			x2++;
	}
	if (x1 > x2)
		cout << 'A';
	else if (x1 < x2)
		cout << 'B';
	else
		cout << 'T';
	return 0;
}