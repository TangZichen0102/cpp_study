#include<bits/stdc++.h>
using namespace std;
bool isletter(char x)
{
	return isupper(x) || islower(x);
}
bool cmp( pair<string,int> x, pair<string,int> y)
{
	return x.second>y.second;
}
int main()
{
	freopen("board.txt","r",stdin);
	map<string,int> lis;
	string word;
	while(cin>>word)
	{
		while(!isletter(word[word.size()-1]) && word.size()!=0)
			word.erase(word.size()-1,1);
		while(!isletter(word[0])             && word.size()!=0)
			word.erase(0,1);
		lis[word]++;
	}
	vector<pair<string,int> >ans;
	for(map<string,int>:: iterator it=lis.begin(); it!=lis.end(); it++)
		ans.push_back(*it);
	sort(ans.begin(),ans.end(),cmp);
	for(int i=0; i<ans.size(); i++)
	{
		cout<<ans[i].first<<" "<<ans[i].second<<endl;
	}
	return 0;
}
