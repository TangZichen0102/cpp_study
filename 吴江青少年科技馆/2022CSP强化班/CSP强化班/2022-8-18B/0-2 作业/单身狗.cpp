#include <bits/stdc++.h>
using namespace std;
void output(set<int> &c)
{
	for(set<int>::iterator t=c.begin();t != c.end();t++)cout << *t << ' ';
}
map<int,int> a1;
map<int,int> a2;
set<int> b;
set<int> c;
int main()
{
	int n,cnt=0;
	cin >> n;
	int x,y;
	while(n--)
	{
		cin >> x >> y;
		a1[x]=y;
		a2[y]=x;
	}
	cin >> n;
	while(n--)
	{
		cin >> x;
		if(a1.find(x)==a1.end()&&a2.find(x)==a2.end())
		{
			cnt++;c.insert(x);
		}
		else b.insert(x);
	}
	for(set<int>::iterator t=b.begin();t!=b.end();t++)
	{
		if(b.find(a1[*t])==b.end()&&b.find(a2[*t])==b.end())
		{
			cnt++;c.insert(*t);
		}
	}
	cout << cnt << endl;
	output(c);
	return 0;
}
