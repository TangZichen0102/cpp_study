#include <bits/stdc++.h>
using namespace std;
bool prime(int n)
{
	if(n == 1)
	{
		return false;
	}
	for(int i = 2; i <= n - 1; i++)
	{
		if(n % i == 0)
		{
			return false;
		}
	}
	return true;
}
bool superprime(int n)
{
	while(n > 0)
	{
		if(prime(n))
		{
			n = n / 10;
		}
		else
		{ 
			return false;
		}
	}
	return true;
}
int main()
{
	int i, a;
	cin >> a;
	for(i = 2; i < a; i++)
	{
		if(superprime(i))
		{
			cout << i << endl;
		}
	}
	return 0;
}
