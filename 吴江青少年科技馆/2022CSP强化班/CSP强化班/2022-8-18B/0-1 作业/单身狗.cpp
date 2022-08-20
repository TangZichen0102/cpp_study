#include<bits/stdc++.h>
using namespace std;
map<string,string>couple;
bool pr[1001];
bool kill(string x, string person[], int n)
{
	for(int i=1; i<=n; i++)
		if(person[i]==x)
		{
			pr[i]=false;
			return true;
		}
	return false;
}
int main(){
	string person[1001];
	int n, m;
	cin>>n>>m;
	for(int i=1; i<=n; i++)
	{
		string male,female;
		cin>>male>>female;
		couple[male]=female;
		couple[female]=male;
	}
	for(int i=1; i<=m; i++)
	{
		cin>>person[i];
		if(kill(couple[person[i]],person,i-1))
			pr[i]=false;
		else
			pr[i]=true;
	}
	for(int i=1; i<=m; i++)
		if(pr[i])
			cout<<person[i]<<" ";
	return 0;
}
