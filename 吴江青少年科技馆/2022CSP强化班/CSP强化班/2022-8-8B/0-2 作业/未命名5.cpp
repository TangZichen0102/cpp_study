#include <bits/stdc++.h>
using namespace std;
int main() {
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	int max=0,min=0;
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			if(j>i)
			{
				if((a[j]-a[i])>max)
				{
					max=a[j]-a[i];
				}
				else if((a[j]-a[i])<min)
				{
					min=a[j]-a[i];
				}
			}
		}
	}
	if(max>0)
	{
		cout<<max;
	}
	else
	{
		max=min;
		for(int i=0;i<n;i++)
		{
			for(int j=0;j<n;j++)
			{
				if(j>i)
				{
					if((a[j]-a[i])>max)
					{
						max=a[j]-a[i];
					}
					else if((a[j]-a[i])<min)
					{
						min=a[j]-a[i];
					}
				}
			}
		}
		cout<<max;
	}
	return 0;
}
