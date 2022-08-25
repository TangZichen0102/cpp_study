#include <iostream>
#include <iomanip>
#include <vector>
using namespace std;
#define max(x,y) (x)>(y)?(x):(y)

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
int Solve(vector<vector<int> > &M) 
{
	int m=M.size(), n=M[0].size();
	vector<vector<int> > dp(m, vector<int>(n, 1) );
	// 状态初始化：   dp[i][j] = 1
	// 状态转移方程： dp[i][j] = max(dp[i][j-1], dp[i][j+1], dp[i-1][j], dp[i+1][j]) +1
	for(int k=1; k<=m*n; k++)
	{
		cout<< k<<endl;
		bool success=true;
		for(int i=0; i<m; i++)
			for(int j=0; j<n; j++)
			{
				// dp[i][j]=?
				//  边界           高度                   长度 
				if(i-1>=0 && M[i-1][j]>M[i][j] && dp[i-1][j]+1>dp[i][j]) dp[i][j]=dp[i-1][j]+1, success=false;
				if(i+1 <m && M[i+1][j]>M[i][j] && dp[i+1][j]+1>dp[i][j]) dp[i][j]=dp[i+1][j]+1, success=false;
				if(j-1>=0 && M[i][j-1]>M[i][j] && dp[i][j-1]+1>dp[i][j]) dp[i][j]=dp[i][j-1]+1, success=false;
				if(j+1 <n && M[i][j+1]>M[i][j] && dp[i][j+1]+1>dp[i][j]) dp[i][j]=dp[i][j+1]+1, success=false;
			}
		if(success==true)   break;
		Output(dp);
	}
	return 0;
}

int main()
{
	freopen("data.txt", "r", stdin);
	int i,j, m,n;	cin>>m>>n;
	vector<vector<int> > M(m, vector<int>(n) );
	for(i=0; i<m; i++)
		for(j=0; j<n; j++)	
			cin>>M[i][j];
	int maxlen=Solve(M);
	cout<<maxlen<<endl;
    return 0;
}


