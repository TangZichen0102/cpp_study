#include <bits/stdc++.h>
using namespace std;
int sushu(int x)
{
	if(x <= 1)
	{
		return 0;
	}
	if(x == 2)
	{
		return 1;
	}
	for(int i = 2; i <= x - 1; i++)
	{
		if(x % i == 0)
		{
			return 0;
		}
	}
	return 1;
}
int main()
{
	int i, j, n;
	cout << "n=";
	do
	{
		cin >> n;
	}
	while(n < 4);
	for(i = 4; i <= n; i += 2)
	{
		for(j = 2; j < i; j++)
		{
			if(sushu(j))
			{
				if(sushu(i - j))
				{
					cout << i << '=' << j << '+' << i - j << endl;
					break;
 				}
			}
		}
	}
	return 0;
} 
