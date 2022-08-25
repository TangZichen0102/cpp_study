#include <iostream>
#include <iomanip>
#include <vector>
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
	int i,j, m=3,n=4; //	cin>>m>>n;
	vector<vector<int> > dp(m, vector<int>(n,1) );
	for(i=1; i<m; i++)
		for(j=1; j<n; j++)
		{
			dp[i][j]=dp[i][j-1]+dp[i-1][j];
		}
	Output(dp);
	return 0;
}


