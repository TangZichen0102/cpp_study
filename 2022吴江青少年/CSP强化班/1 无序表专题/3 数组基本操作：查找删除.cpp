#include  <iostream>
using namespace std;

void Output(int a[], int n)
{
	for(int i=0; i<n; i++)
		cout<<a[i]<<" "; 
	cout<<endl; 
} 

int Search(int a[],int n, int x)
{
	for(int i=0; i<n; i++)
		if(a[i]==x)
			return i;
	return -1;
}
// 在a[0]...a[n-1]中，删除a[k] 
int RemoveAt(int a[],int n, int k)
{
	for(int i=k+1; i<n; i++)
		a[i-1]=a[i];
	return n-1;
}

// 模块化程序设计方法 
int SearchRemove1(int a[],int n, int x)
{
	int k=Search(a,n,x);
	if(k==-1)   return n;
	return RemoveAt(a,n, k);
} 
// 结构化程序设计方法 
int SearchRemove2(int a[],int n, int x)
{
	int i;
	for(i=0; i<n; i++)
		if(a[i]==x)
			break;
	if(i==n)
		return n;
	for(int j=i+1; j<n; j++)
		a[j-1]=a[j];
	return n-1;
} 

int main()
{
	int a[6]={22,44,33,66,11,55}, n=6;
	Output(a, n);
	int x=33;
	n = SearchRemove2(a,n, x); 
	Output(a, n);
	return 0;
}

