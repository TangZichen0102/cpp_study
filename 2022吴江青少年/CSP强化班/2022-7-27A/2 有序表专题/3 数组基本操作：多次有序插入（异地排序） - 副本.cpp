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
// a[]: 11,22,33,44,55,66     x:50
// a[]: 11,22,33,44,50,55,66    
// a[]: 11,22,33,44,55,66     x:5
// a[]:  5,11,22,33,44,55,66
int Insert(int a[],int n, int x)
{
	int i;
	for(i=n-1; i>=0 && a[i]>x; i--)  // 大数 
		a[i+1]=a[i];   // 数据后移 
    a[i+1] = x;
	return n+1;
}

int main()
{
	int a[20], na=0;
	int b[20]={40,22,11,66,33,44,55,50,10,20,30,60}, nb=12;
	Output(a, na);   
	for(int i=0; i<nb; i++)
	{
		na = Insert(a,na, b[i]);
		Output(a, na);   
	}
	return 0;
}






