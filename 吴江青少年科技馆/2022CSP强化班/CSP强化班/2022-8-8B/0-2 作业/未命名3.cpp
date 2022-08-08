#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
    	cin>>a[i];
	}
	int tmp;
	for(int i=0; i<n-1; i++)
	{
		for(int j=n-1; j>i; j--)
		{
			if(a[j-1]>a[j])
			{
				tmp=a[j-1]; a[j-1]=a[j]; a[j]=tmp;
			}
		}
	}
	int sum=0;
	if(n%2==1)
	{
		for(int i=0;i<n;i++)
    	{
    		if(i!=n/2)
    		{
    			sum+=abs(a[i]-a[n/2]);
			}
		}
		cout<<sum;
	}
	else
	{
		int sum2;
		for(int i=0;i<n;i++)
    	{
    		if(i!=n/2)
    		{
    			sum+=abs(a[i]-a[n/2]);
			}
		}
		for(int i=0;i<n;i++)
    	{
    		if(i!=n/2+1)
    		{
    			sum2+=abs(a[i]-a[n/2]);
			}
		}
		if(sum<=sum2)
		{
			cout<<sum;
		}
		else
		{
			cout<<sum2;
		}
	}
    return 0;
}
