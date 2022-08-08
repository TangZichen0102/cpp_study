#include <bits/stdc++.h>
using namespace std;

double mysqrt(double n)
{
	double l=0,r=n, jd=1e-8;  //0.00000001;
	while(l+jd<r)
	{
		double mid=(l+r)/2;
		double mid2=mid*mid;
		if(mid2==n)return mid;
		if(mid2>n)
			r=mid;
		else
			l=mid;
	}
	return r;
}

int main()
{
	double n;
	cin >> n;
	cout << mysqrt(n);
	return 0;
}
