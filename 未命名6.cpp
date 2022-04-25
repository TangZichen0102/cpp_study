#include <bits/stdc++.h>
using namespace std;
int main()
{
	int m = 0; 
	int n = 0;
	int arr[5][5] = {};
	for(int i = 0; i < 5; i++)
	{
		for(int j = 0; j < 5; j++)
		{
			cin >> arr[i][j];
		}
	}
	cin >> m >> n;
	for(int i = 0; i< 5; i++)
	{
		swap(arr[m - 1][i], arr[n - 1][i]);
	}
	for(int i = 0; i < 5; i++)
	{
		for(int j = 0; j < 5; j++)
		{
			cout << arr[i][j] << " ";
		}
		cout << endl;
	}
	return 0;
}
