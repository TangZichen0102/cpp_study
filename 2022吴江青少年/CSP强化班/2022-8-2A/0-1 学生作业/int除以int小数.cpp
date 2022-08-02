#include<bits/stdc++.h>

using namespace std;

int l[100005];
int Search(int *a,int n,int x)
{
	for(int i=0;i<n;i++)
		if(a[i]==x)
			return i;
	return -1;
}
void cf(int a,int b)
{
	int n=0;
	int ys;
	if(a>b){
		cout<<a/b;
		a%=b;
	}
	else cout<<"0";
	int k=-1;
	while(a!=0)
	{
		a*=10;
		k=Search(l,n,a/b);
		if(k!=-1) break;
		l[n++]=a/b;
		a%=b;
	}
	//Êä³ö
	if(a!=0) cout<<".";
	for(int i=0;i<n;i++)
	{
		if(i==k) cout<<"(";
		cout<<l[i];
	}
	if(k!=-1) cout<<")"; 
}
int main()
{
	int a,b;
	cin>>a>>b;
	cf(a,b);
	return 0;
}
