#include<bits/stdc++.h>
using namespace std;

int main()
{
	string s;	cin>>s;
	map<char, int>m;

	int H,T,maxn=0;
	H=0,T=0;
	m[s[0]]=true;
	while(T < s.size()-1)
	{
		T++;
		if(m[s[T]])
			while(m[s[T]])
				m[s[H++]]=false;
		m[s[T]]=true;
		maxn=max(maxn,T-H+1);
	}
	cout<<maxn<<endl;
	return 0;
}
