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
// a[10]={2,4,3,10,1,5}, na=6;
// b[10]={1,2,4,3, 7,8,9,6, 1,5}, nb=10;
// c[10]=2 4 3 1 5
int InterSet(int a[],int na, int b[],int nb, int c[])
{
	int nc=0;
	for(int i=0; i<na; i++)
	{
		int kb=Search(b,nb, a[i]);
		int kc=Search(c,nc, a[i]);
		if(kb!=-1 && kc==-1)
			c[nc++] = a[i];
	}
	return nc;
}

int main()
{
	int a[10]={2,4,3,2,1,2}, na=6;
	int b[10]={1,2,4,3, 7,8,9,6, 1,5}, nb=10;
	int c[10], nc;
	nc=InterSet(a,na, b,nb, c);
	Output(a, na);
	Output(b, nb);
	Output(c, nc);
	return 0;
}

