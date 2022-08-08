#include  <iostream>
using namespace std;

void D(int x, int cnt[])
{
	while(x>0)
	{
		cnt[x%10]++;
		x = x/10;
	}
}
int FindiMax(int a[],int n)
{
	int imax=0;
	for(int i=1; i<n; i++)
		if(a[i]>a[imax])
			imax=i;
	return imax;
}

int main()
{
	int cnt[10]={0};
	int x1=97, x2=103;
	for(int x=x1; x<=x2; x++)
		D(x, cnt);
	int k=FindiMax(cnt,10);
	cout<<k<<" "<<cnt[k]<<endl;
	return 0;
}






