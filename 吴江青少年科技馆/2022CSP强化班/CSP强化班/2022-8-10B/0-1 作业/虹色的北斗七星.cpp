#include<bits/stdc++.h>
using namespace std;

int a[4000001]={};
int main(){
	int maxans=INT_MIN;
	int n;
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
		a[i]-=i;
	}
	int minn=INT_MAX;
	for(int i=1;i<=n;i++)
	{
		minn=min(minn,a[i]);
		maxans=max(maxans,a[i]-minn-1);
	}
	for(int i=1;i<=n;i++)
		a[i]+=2*i;
	int maxn=INT_MIN;
	for(int i=1;i<=n;i++)
	{
		maxn=max(maxn,a[i]);
		maxans=max(maxans,maxn-a[i]-1);
	}
	cout<<maxans;
	return 0;
}
