#include <bits/stdc++.h>
using namespace std;
int main() {
	int n,m;
	cin>>n>>m;
	int a[n];
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	int sum=0;
	for(int i=0; i<n-1; i++)
		for(int j=i+1; j<n; j++)
			if(a[i]+a[j]==m)
				sum++;
	cout<<sum;
	return 0;
}
