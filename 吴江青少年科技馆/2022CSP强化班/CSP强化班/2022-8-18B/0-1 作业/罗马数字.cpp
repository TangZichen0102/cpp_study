#include<bits/stdc++.h>
using namespace std;
map<char,int>Roman;
int main()
{
	Roman['I']=1;
	Roman['V']=5;
	Roman['X']=10;
	Roman['L']=50;
	Roman['C']=100;
	Roman['D']=500;
	Roman['M']=1000;
	string R;	cin>>R;
	
	int Int=Roman[R[0]];
	for(int i=1; i<R.size(); i++)
	{
		int n=Roman[R[i]];
		int f=Roman[R[i-1]];
		Int +=n;
		if(n > f)
			Int -= 2*f;
	}
	cout<<Int<<endl;
	return 0;
}

