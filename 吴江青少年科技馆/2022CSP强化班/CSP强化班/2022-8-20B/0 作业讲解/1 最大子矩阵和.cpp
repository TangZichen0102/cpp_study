#include <bits/stdc++.h>
using namespace std;

const int N=10;
// ÐÐÑ¹Ëõ £¿ 
// ÁÐÑ¹Ëõ £¿
int GetMax(int a[],int n,int &si,int &ei)
{
	int sum=0,maxsum=INT_MIN;
	int start=0;
	for(int i=0;i<n;i++)
	{
		if(sum<0)
			sum =a[i],	start=i;
		else
			sum+=a[i];
		if(sum>maxsum)
			maxsum=sum, si=start,ei=i;
	}
	return maxsum;
}
int GetMax(int a[N][N],int m,int n, int &maxsi,int &maxsj,int &maxei,int &maxej)
{
	int maxsum=INT_MIN;
	for(int si=0; si<m; si++)
	{
		int b[N]={0};
		for(int ei=si; ei<m; ei++)
		{
			for(int j=0; j<n; j++)
				b[j]+=a[ei][j];
			int sj,ej;
			int sum=GetMax(b,n,sj,ej);
			if(sum>maxsum)
				maxsum=sum,maxsi=si,maxei=ei,maxsj=sj,maxej=ej;
		}
	}
	return maxsum;
}
int main()
{
	int a[N][N]={
		{5,-6,7,-3,4,8,-9,10,1,2}, 
		{5,-6,7,-3,4,8,-9,10,1,2}, 
		{5,-6,7,-3,4,8,-9,10,1,2}, 
		{5,-6,7,-3,4,8,-9,10,1,2}, 
		{5,-6,7,-3,4,8,-9,10,1,2}, 
		{5,-6,7,-3,4,8,-9,10,1,2}, 
		{5,-6,7,-3,4,8,-9,10,1,2} 
	};
	int m=7,n=10; 
	int si,sj,ei,ej;
	int sum=GetMax(a,m,n, si,sj,ei,ej);
	cout<<si<<" "<<ei<<endl<<sj<<" "<<ej<<endl<<sum;
	return 0;
}
