#include<bits/stdc++.h>
using namespace std;
map<char,char>match;
int main(){
	string s1,s2;
	cin>>s1>>s2;
	for(int i=0; i<s1.size(); i++)
	{
		if(match[s1[i]] && match[s2[i]])
		{
			if(!(match[s1[i]]==s2[i] && match[s2[i]]==s1[i]))
			{
				cout<<"No Match!"<<endl;
				return 0;
			}
		}
		else if(!match[s1[i]] &&!match[s2[i]])
		{
			match[s1[i]]=s2[i];
			match[s2[i]]=s1[i];
		}
		else
		{
			cout<<"No Match!"<<endl;
			return 0;
		}
	}
	cout<<"Perfect Match!"<<endl;
	return 0;
}
