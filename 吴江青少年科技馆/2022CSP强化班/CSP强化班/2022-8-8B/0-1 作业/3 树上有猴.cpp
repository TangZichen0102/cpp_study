#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t,w,x;
	cin >> t >> w;
	int ma=w,
		mi=0,
	    maz=w,
		miz=0;
	while( t-- )
	{
		cin >> x;
		maz+=x; miz+=x;
		if(maz>w)
		{
			ma-=(maz-w);
			maz=w;
		}
		if(miz<0)
		{
			mi+=abs(0-miz);
			miz=0;
		}
	}
	cout << ma-mi+1;
	return 0;
} 
