#include <bits/stdc++.h>

using namespace std;
int n;
int a, b;

int main()
{
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> a >> b;
		if (a == 0 && b == 0)
		{
			cout << "YES";
			break;
		}
		else if ((a == 0 && b != 0) || (a != 0 && b == 0))
		{
			cout << "NO";
			break;
		}
		else if ((a / 1 == b / 2) || (a / 2 == b / 1) || (a / 3 == b / 3))
		{
			cout << "YES";
			break;
		}
		else
			cout << "NO";
	}
	return 0;
}
