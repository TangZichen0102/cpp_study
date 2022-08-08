#include <bits/stdc++.h>
using namespace std;
int a[500][500];
int max(int a[500][500],int i,int j)
{
	int flag=1;
	for(int k=0;k<j;k++)
	{
		if(j!=k)
		{
			if(a[i][j]>=a[i][k])
			{
				flag=0;
			}
		}
	}
	return flag;
}
int min(int a[500][500],int i,int j)
{
	int flag=1;
	for(int k=0;k<i;k++)
	{
		if(j!=k)
		{
			if(a[i][j]<=a[k][j])
			{
				flag=0;
			}
		}
	}
	return flag;
}
int main() {
	int n,m;
	cin>>n>>m;
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			cin>>a[i][j];
		}
	}
	int sum=0;
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<m;j++)
		{
			if((max(a,i,j)==1)&&(min(a,i,j)==1))
			{
				sum++;
			}
		}
	}
	cout<<sum;
	return 0;
}

