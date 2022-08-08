#include <bits/stdc++.h>
using namespace std;
int main() {
	int n,m;
	cin>>n>>m;
	int a[n+2][m+2];
	for(int i=0;i<=m;i++)
	{
		a[0][i]=0;
	}
	for(int i=0;i<=n;i++)
	{
		a[i][0]=0;
	}
	for(int i=0;i<=m;i++)
	{
		a[n+1][i]=0;
	}
	for(int i=0;i<=n;i++)
	{
		a[i][m+1]=0;
	}
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=m;j++)
		{
			cin>>a[i][j];
		}
	}
	int sum=0;
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=m;j++)
		{
			if((a[i][j]>a[i-1][j-1])&&(a[i][j]>a[i-1][j])&&(a[i][j]>a[i-1][j+1])&&(a[i][j]>a[i][j-1])&&(a[i][j]>a[i][j+1])&&(a[i][j]>a[i+1][j-1])&&(a[i][j]>a[i+1][j])&&(a[i][j]>a[i+1][j+1]))
			{
				sum++;
			}
		}
	}
	cout<<sum;
	return 0;
}
