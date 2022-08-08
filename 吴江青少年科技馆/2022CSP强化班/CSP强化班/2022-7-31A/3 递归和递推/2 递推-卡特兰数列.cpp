#include  <iostream>
#include  <iomanip>
using namespace std;

int main()
{
	int n=20;
	int f[n];
	f[0]=1;  f[1]=1;
	for(int i=2; i<n; i++) 
	{
		f[i] = 0;
		for(int left=0; left<i; left++)
		{
			int right = i-1-left;
			f[i]  += f[left]*f[right];
		}
		cout<<f[i]<<endl;
	}
	return 0;
}





