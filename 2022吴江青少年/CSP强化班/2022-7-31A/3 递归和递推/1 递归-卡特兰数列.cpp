#include  <iostream>
#include  <iomanip>
using namespace std;

int Catlan(int n)
{
	if(n==0)  return 1;
	if(n==1)  return 1;
	int cnt = 0;
	for(int left=0; left<n; left++)
	{
		int right=n-1-left;
		cnt += Catlan(left)*Catlan(right);
	}
	return cnt;
}

int main()
{
	int n=19;
	for(int i=1; i<=n; i++) 
		cout<<Catlan(i)<<endl;
	return 0;
}





