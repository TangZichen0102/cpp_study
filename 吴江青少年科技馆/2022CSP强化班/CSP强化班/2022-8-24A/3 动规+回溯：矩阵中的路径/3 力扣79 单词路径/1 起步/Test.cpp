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
	Output(dp);
    return 0;
}


