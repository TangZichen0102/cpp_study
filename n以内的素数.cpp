#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin >> n;
	bool a[n + 1];
	int i, j, num;
	for(i = 2; i <= n; i++)
	{
		a[i] = true;
	}
	a[0] = a[1] = false;
	i = 1;
	do
	{
		i++;
		if(a[i])
		{
			for(j = 2; j <= n / i; j++)
			{
				a[i * j] = false;
			}
		}
	}
	while(i < n);
	num = 0;
	for(i = 1; i <= n; i++)
	{
		if(a[i])
		{
			cout << setw(1) << i << endl;
			num++;
			if(num % 10 == 0)
			{
				cout << endl;
			}
		}
	}
	cout << endl; 
	cout << n << "以内的素数有:" << num << "个" << endl; 
	return 0;
} 
