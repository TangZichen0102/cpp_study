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
// 在a[0]...a[n-1]中，在a[k]上，插入x
int InsertAt(int a[],int n, int k, int x)
{
	for(int i=n-1; i>=k; i--)
		a[i+1]=a[i];
	a[k]=x;  
	return n+1;
}

int main()
{
	int a[10]={22,44,33,66,11,55}, n=6;
	Output(a, n);   // 22,44,33,66,11,55
	int k=2, x=99;
	n = InsertAt(a,n, k,x);
	Output(a, n);   // 22,44, 99, 33,66,11,55
	return 0;
}






