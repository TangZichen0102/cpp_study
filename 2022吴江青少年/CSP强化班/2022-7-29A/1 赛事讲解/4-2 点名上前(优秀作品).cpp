#include  <iostream>
using namespace std;

int main()
{
	//freopen("1.txt", "r", stdin);
	int n,k;  cin>>n>>k;
	int a[k-1];
	for(int i=0; i<k-1; i++)  cin>>a[i];
	int x; cin>>x;  
	cout<<x<<" ";
	Output(a,k-1);
	for(int i=k+1; i<n; i++)
	{
		int x; cin>>x;  
		cout<<x<<" ";
	}  
	return 0;
}






