#include <bits/stdc++.h>
using namespace std;
void output(set<char> &s)
{
	for(set<char>::iterator t=s.begin();t!=s.end();t++)cout << *t;
	cout << endl;
}
int maxlen(string s)
{
	set<char> a,ma;
	int len=0,maxlen=0,i=0;
	while(i<s.size()&&a.find(s[i])==a.end())
	{
		a.insert(s[i]);i++;len++;
	}
	ma=a;
	for(int j = i;j < s.size();j++)
	{
		if(a.find(s[j])==a.end())
		{
			a.insert(s[j]);len++;
		}
		else
		{
			if(maxlen<len)
			{
				maxlen=len;
				ma=a;
			}
			a.erase(a.begin());len--;
		}
	}
	if(maxlen<len)
	{
		maxlen=len;
		ma=a;
	}
	output(ma);
	return maxlen;
}
int main()
{
	string s;
	getline(cin,s);
	cout << maxlen(s);
	return 0;
}
