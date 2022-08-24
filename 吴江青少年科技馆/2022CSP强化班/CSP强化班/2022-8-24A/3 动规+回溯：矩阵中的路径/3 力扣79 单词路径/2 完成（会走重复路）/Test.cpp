#include <iostream>
#include <iomanip>
#include <vector>
#include <string>
using namespace std;

void Output(vector<vector<int> > &M)
{
	for(int i=0; i<M.size(); i++)
	{
		for(int j=0; j<M[i].size(); j++)
			cout<<setw(2)<<M[i][j]<<" ";
		cout<<endl;
	}
	cout<<endl;
}

int main()
{
	freopen("data.txt","r", stdin);
	int i,j, m,n;  cin>>m>>n;
	vector<vector<char> > Board(m,vector<char>(n));
	for(i=0; i<m; i++)
		for(j=0; j<n; j++)
			cin>>Board[i][j];
	string word;  cin>>word;
	vector<vector<int> > dp(m, vector<int>(n, -1) );
	int ith=0;
	for(i=0; i<m; i++)
		for(j=0; j<n; j++)
			if(Board[i][j]==word[ith])  dp[i][j] = ith;
	bool success;
	do 
	{
		success=true;
		ith++;
		for(i=0; i<m; i++)
			for(j=0; j<n; j++)
			{
				if(Board[i][j]!=word[ith])  continue;
				if(i-1>=0 && Board[i-1][j]==word[ith-1] && dp[i-1][j]==ith-1)
						dp[i][j] = ith, success=false;
				if(i+1<m  && Board[i+1][j]==word[ith-1] && dp[i+1][j]==ith-1)
						dp[i][j] = ith, success=false;
				if(j-1>=0 && Board[i][j-1]==word[ith-1] && dp[i][j-1]==ith-1)
						dp[i][j] = ith, success=false;
				if(j+1<n  && Board[i][j+1]==word[ith-1] && dp[i][j+1]==ith-1)
						dp[i][j] = ith, success=false;
			}
	}while(ith<word.length() && success==false);
	if(ith<word.length())
		cout<<"false"<<endl;
	else
		cout<<"true"<<endl;
	Output(dp);
    return 0;
}


