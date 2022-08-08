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
int main()
{
	int a[6]={22,44,33,66,11,55}, n=6;
	Output(a, n);
	int x=336;
	int k=Search(a,n, x); // 2
	cout<<k<<endl;
	return 0;
}






