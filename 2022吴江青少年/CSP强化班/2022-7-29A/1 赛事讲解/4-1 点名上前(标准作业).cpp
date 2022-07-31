#include  <iostream>
using namespace std;

int main()
{
	//freopen("1.txt", "r", stdin);
	int n,k;  cin>>n>>k;
	int a[n];
	for(int i=0; i<n; i++)  cin>>a[i];
	k--;
	int x=a[k];
	n=RemoveAt(a,n, k);
	n=InsertAt(a,n,0,x);
	Output(a,n);
	return 0;
}






