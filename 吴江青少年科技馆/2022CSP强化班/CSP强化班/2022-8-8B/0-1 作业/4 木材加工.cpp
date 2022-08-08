#include <bits/stdc++.h>
using namespace std;
int getnum(int mt[],int len,int n)
{
	int cnt=0;
	for(int i = 0;i < n;i++)cnt+=mt[i]/len;
	return cnt;
}

int maxlen(int mt[],int n,int ml,int k)
{
	int l=1,r=ml;
	while(l<=r)
	{
		int mid=(l+r)/2;
		int num=getnum(mt,mid,n);
		if(num==k)
			l=mid+1;
		else 
			if(num>k)
				l=mid+1;
			else 
				r=mid-1;
	}
	if( l>ml || r<1)
		return (l+r)/2;
	return l;
}
int main()
{
	int a[10005];
	int n,k,m=0;
	cin >> n >> k;
	for(int i = 0;i < n;i++)
	{
		cin >> a[i];	m=max(m,a[i]);
	}
	cout << maxlen(a,n,  m,k);
	return 0;
}
